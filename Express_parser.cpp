//
//  Express_parser.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Express_parser.hpp"

Express_parser::Express_parser() {
  unparsed_types = 0;
  unparsed_entities = 0;
  unparsed_entity_attributes = 0;
  parsed_entity_attributes = 0;
  
  pod_types["REAL"] = "double";
  pod_types["BOOLEAN"] = "bool";
  pod_types["INTEGER"] = "int";
  pod_types["STRING"] = "std::string";
  pod_types["LOGICAL"] = "int";
  pod_types["NUMBER"] = "unsigned int";
  pod_types["BINARY(32)"] = "std::uint32_t";
  pod_types["BINARY"] = "char *";
}

std::string Express_parser::format_attribute(const std::string &ifc_name) {
  std::string cpp_name = "";
  for (auto const i : ifc_name) {
    if (cpp_name.length() == 0) {
      cpp_name += tolower(i);
    } else if (i >= '0' && i <= '9' && (cpp_name.back() < '0' || cpp_name.back() > '9')) {
      cpp_name += '_';
      cpp_name += i;
    } else if (i >= 'a' && i <= 'z') {
      cpp_name += i;
    } else {
      cpp_name += '_';
      cpp_name += tolower(i);
    }
  } return cpp_name;
}

std::string Express_parser::format_name(const std::string &ifc_name) {
  std::string cpp_name = "";
  for (auto const i : ifc_name) {
    if (cpp_name.length() == 0) {
      cpp_name += i;
    } else if (i >= '0' && i <= '9' && (cpp_name.back() < '0' || cpp_name.back() > '9')) {
      cpp_name += '_';
      cpp_name += i;
    } else if (i >= 'a' && i <= 'z') {
      cpp_name += i;
    } else {
      cpp_name += '_';
      cpp_name += tolower(i);
    }
  } return cpp_name;
}

void Express_parser::parse_type(const std::string &contents) {
  
  std::string type_name = "";
  std::string type_definition = "";
  std::string type_where = "";
  
  auto const name = qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(type_name) = qi::_1];
  auto const definition = qi::as_string[qi::lexeme[+(!qi::lit(';') >> qi::char_)]][phoenix::ref(type_definition) = qi::_1];
  auto const one_where = !qi::lit("END_TYPE") >> +qi::alnum >> qi::space >> qi::char_(':') >> qi::space >> +(!qi::char_(';') >> qi::char_) >> qi::char_(';');
  auto const where = qi::as_string[+qi::lexeme[one_where]][phoenix::ref(type_where) = qi::_1];
  auto const type = qi::lit("TYPE") >> name >> qi::lit('=') >> definition >> qi::lit(';') >> -(qi::lit("WHERE") >> where) >> qi::lit("END_TYPE") >> qi::lit(';');
  
  std::string::const_iterator position = contents.begin();
  qi::phrase_parse(position, contents.end(), type, qi::space);
  
  // Couldn't parse type
  if (position != contents.end()) {
    std::cout << "Type: \"" << contents << "\"" << std::endl;
    std::cout << "Stuck at->";
    while (position != contents.end()) {
      std::cout << *position;
      ++position;
    }
  }
  
  else {
    
    // Try to parse as a pod type
    auto const pods = (qi::string("REAL") | qi::string("BOOLEAN") | qi::string("INTEGER") | qi::string("STRING") | qi::string("LOGICAL") | qi::string("NUMBER") | qi::string("BINARY(32)") | qi::string("BINARY")) >> -qi::omit[qi::lit('(') >> qi::uint_ >> qi::lit(')')] >> -qi::lit("FIXED");
    std::string::iterator type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), pods, qi::space);
    if (type_position == type_definition.end()) {
      types_code[type_name] = "typedef " + pod_types[type_definition] + " " + format_name(type_name) + ";";
      return;
    }

    // Try as a container of a pod type
    std::string this_pod;
    auto const container_types = qi::string("ARRAY") | qi::string("LIST") | qi::string("SET") | qi::string("BAG");
    auto const container_of_pod = container_types >> qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']')  >> qi::lit("OF") >> qi::as_string[pods][phoenix::ref(this_pod) = qi::_1];
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), container_of_pod, qi::space);
    if (type_position == type_definition.end()) {
      types_code[type_name] = "typedef std::vector<" + pod_types[this_pod] + "> " + format_name(type_name) + ";";
      return;
    }

    // Try as a container of another type
    std::string this_type;
    auto const container_of_another_type = container_types >> qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']')  >> qi::lit("OF") >> -qi::lit("UNIQUE") >> qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(this_type) = qi::_1];
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), container_of_another_type, qi::space);
    if (type_position == type_definition.end()) {
      dependencies[type_name].push_back(this_type);
      types_code[type_name] = "typedef std::vector<" + format_name(this_type) + "> " + format_name(type_name) + ";";
      return;
    }
    
    // Try as an enumeration
    auto const list = qi::lit('(') >> (+qi::lexeme[qi::alnum | qi::char_('_')] % qi::lit(',')) >> qi::lit(')');
    auto const enumeration = qi::lit("ENUMERATION") >> qi::lit("OF") >> list;
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), enumeration, qi::space);
    if (type_position == type_definition.end()) {
      enumerations_code[type_name] = "typedef std::string " + format_name(type_name) + ";";
      return;
    }

    // Try as a select type
    std::list<std::string> select_subclasses;
    auto const select = qi::lit("SELECT") >> qi::lit('(') >> (qi::as_string[qi::lexeme[+qi::alnum]][phoenix::push_back(phoenix::ref(select_subclasses), qi::_1)] % qi::lit(',')) >> qi::lit(')');
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), select, qi::space);
    if (type_position == type_definition.end()) {
      for (auto const sc : select_subclasses) {
        select_types[sc].push_back(type_name);
      } selects_code[type_name] = "struct " + format_name(type_name) + " {virtual ~" + format_name(type_name) + "() {} };";
      return;
    }
    
    // Try as another defined type
    auto const another_type = qi::lexeme[+qi::alnum];
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), another_type, qi::space);
    if (type_position == type_definition.end()) {
      dependencies[type_name].push_back(type_definition);
      types_code[type_name] = "typedef " + format_name(type_definition) + " " + format_name(type_name) + ";";
      return;
    }
    
    // Couldn't be parsed
    std::cout << "Name: " << type_name << std::endl;
    std::cout << "Definition: " << type_definition << std::endl;
    std::cout << "Where: \"" << type_where << "\"" << std::endl;
    ++unparsed_types;
  }
}

void Express_parser::parse_entity(const std::string &contents) {
  
  std::string entity_name = "";
  std::list<std::string> entity_superclasses;
  std::list<std::string> entity_subclasses;
  std::string entity_attributes = "";
  std::string entity_derives = "";
  std::string entity_inverses = "";
  std::string entity_uniques = "";
  std::string entity_wheres = "";
  bool abstract = false;
  
  auto const name = qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(entity_name) = qi::_1];
  auto const subtype = qi::lit("SUBTYPE") >> qi::lit("OF") >> qi::lit('(') >> (qi::as_string[qi::lexeme[+qi::alnum]][phoenix::push_back(phoenix::ref(entity_superclasses), qi::_1)] % qi::lit(',')) >> qi::lit(')');
  auto const supertype = -qi::lit("ABSTRACT")[phoenix::ref(abstract) = true] >> qi::lit("SUPERTYPE") >> -(qi::lit("OF") >> qi::lit('(') >> qi::lit("ONEOF") >> qi::lit('(') >> (qi::as_string[qi::lexeme[+qi::alnum]][phoenix::push_back(phoenix::ref(entity_subclasses), qi::_1)] % qi::lit(',')) >> qi::lit(')') >> qi::lit(')'));
  auto const sub_and_superclasses = -supertype >> -subtype;
  
  auto const keywords = qi::lit("DERIVE") | qi::lit("INVERSE") | qi::lit("WHERE") | qi::lit("UNIQUE") | qi::lit("END_ENTITY");
  auto const key_value = -+qi::space >> !keywords >> +(!qi::space >> qi::char_) >> -+qi::space >> qi::char_(':') >> -+qi::space >> +(!qi::char_(';') >> qi::char_) >> -+qi::space >> qi::char_(';');
  auto const key_values = +qi::lexeme[key_value];
  
  auto const attributes = qi::as_string[key_values][phoenix::ref(entity_attributes) = qi::_1];
  auto const derive = qi::lit("DERIVE") >> qi::as_string[key_values][phoenix::ref(entity_derives) = qi::_1];
  auto const inverse = qi::lit("INVERSE") >> qi::as_string[key_values][phoenix::ref(entity_inverses) = qi::_1];
  auto const unique = qi::lit("UNIQUE") >> qi::as_string[key_values][phoenix::ref(entity_uniques) = qi::_1];
  auto const where = qi::lit("WHERE") >> qi::as_string[key_values][phoenix::ref(entity_wheres) = qi::_1];
  auto const entity = qi::lit("ENTITY") >> name >> sub_and_superclasses >> qi::lit(';') >> -attributes >> -derive >> -inverse >> -unique >> -where >> qi::lit("END_ENTITY") >> qi::lit(';');
  
  std::string::const_iterator position = contents.begin();
  qi::phrase_parse(position, contents.end(), entity, qi::space);
  
  // Couldn't parse entity
  if (position != contents.end()) {
    std::cout << "Entity: \"" << contents << "\"" << std::endl;
    std::cout << "Stuck at->";
    while (position != contents.end()) {
      std::cout << *position;
      ++position;
    }
  }
  
  else {
    
    // Superclasses
    for (auto const &sc : entity_superclasses) {
      dependencies[entity_name].push_back(sc);
    }
    
    // Attributes
    std::list<std::string> attribute_names;
    std::list<std::string> attribute_definitions;
    std::list<bool> attribute_optionals;
    auto const attributes_parser = +(qi::as_string[qi::lexeme[+(!qi::space >> qi::char_)]][phoenix::push_back(phoenix::ref(attribute_names), qi::_1)] >> qi::lit(':') >> qi::as_string[qi::lexeme[+(!qi::char_(';') >> qi::char_)]][phoenix::push_back(phoenix::ref(attribute_definitions), qi::_1)] >> qi::lit(';'));
    std::string::iterator attributes_position = entity_attributes.begin();
    qi::phrase_parse(attributes_position, entity_attributes.end(), attributes_parser, qi::space);
    
    // Couldn't parse all attributes
    if (attributes_position != entity_attributes.end()) {
      std::cout << "Stuck at->";
      while (position != contents.end()) {
        std::cout << *position;
        ++position;
      }
    }

    std::list<std::string>::iterator current_attribute_name = attribute_names.begin();
    std::list<std::string>::iterator current_attribute_definition = attribute_definitions.begin();
    bool not_parsed = false;
    while (current_attribute_name != attribute_names.end()) {

      // Check if it's optional
      auto const optional = -qi::lit("OPTIONAL");
      if (current_attribute_definition->substr(0, 8) == "OPTIONAL") attribute_optionals.push_back(true);
      else attribute_optionals.push_back(false);

      // Try to parse as pod type
      std::string this_pod = "";
      auto const pods = (qi::string("REAL") | qi::string("BOOLEAN") | qi::string("INTEGER") | qi::string("STRING") | qi::string("LOGICAL") | qi::string("NUMBER") | qi::string("BINARY(32)") | qi::string("BINARY")) >> -qi::omit[qi::lit('(') >> qi::uint_ >> qi::lit(')')] >> -qi::lit("FIXED");
      std::string::iterator attribute_position = current_attribute_definition->begin();
      qi::phrase_parse(attribute_position, current_attribute_definition->end(), optional >> qi::as_string[pods][phoenix::ref(this_pod) = qi::_1], qi::space);
      if (attribute_position == current_attribute_definition->end()) {
        this->entity_attributes[entity_name].push_back(pod_types[this_pod] + " " + format_attribute(*current_attribute_name) + ";");
        if (this_pod == "REAL") this->entity_parsing_attributes[entity_name].push_back("o->step_parser.parse_double(object_attributes[%d]);");
        else if (this_pod == "BOOLEAN") this->entity_parsing_attributes[entity_name].push_back("o->step_parser.parse_boolean(object_attributes[%d]);");
        else if (this_pod == "INTEGER") this->entity_parsing_attributes[entity_name].push_back("o->step_parser.parse_integer(object_attributes[%d]);");
        else if (this_pod == "STRING") this->entity_parsing_attributes[entity_name].push_back("o->step_parser.parse_string(object_attributes[%d]);");
        else if (this_pod == "LOGICAL") this->entity_parsing_attributes[entity_name].push_back("//o->step_parser.parse_logical(object_attributes[%d]);");
        else if (this_pod == "NUMBER") this->entity_parsing_attributes[entity_name].push_back("//o->step_parser.parse_unsigned_integer(object_attributes[%d]);");
        else this->entity_parsing_attributes[entity_name].push_back("//TODO: parse other pod\n");
        ++current_attribute_name;
        ++current_attribute_definition;
        ++parsed_entity_attributes;
        continue;
      }
      
      // Try as another defined type
      std::string this_type;
      auto const another_type = qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(this_type) = qi::_1];
      attribute_position = current_attribute_definition->begin();
      qi::phrase_parse(attribute_position, current_attribute_definition->end(), optional >> another_type, qi::space);
      if (attribute_position == current_attribute_definition->end()) {
        std::string this_code = format_name(this_type) + " ";
        if (types_code.count(this_type) == 0 && enumerations_code.count(this_type) == 0) this_code += "*";
        this_code += format_attribute(*current_attribute_name) + ";";
        this->entity_attributes[entity_name].push_back(this_code);
        if (types_code.count(this_type) > 0) {
          if (types_code[this_type].substr(8, 6) == "double") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_double(object_attributes[%d]);");
          else if (types_code[this_type].substr(8, 4) == "bool") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_boolean(object_attributes[%d]);");
          else if (types_code[this_type].substr(8, 3) == "int") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_integer(object_attributes[%d]);");
          else if (types_code[this_type].substr(8, 11) == "std::string") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_string(object_attributes[%d]);");
          else this->entity_parsing_attributes[entity_name].push_back("//TODO: parse non-pointer type: " + types_code[this_type]);
        } else if (enumerations_code.count(this_type) > 0) {
          this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_constant(object_attributes[%d]);");
        } else { // Selects and entities
          this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = (" + format_name(this_type) + " *)step_parser.parse_link(object_attributes[%d]);\nlinks_to_resolve.push_back((Ifc **)&o->" + format_attribute(*current_attribute_name) + ");");
        }
        ++current_attribute_name;
        ++current_attribute_definition;
        ++parsed_entity_attributes;
        continue;
      }

      // Try as a container of a pod type
      auto const container_types = qi::string("ARRAY") | qi::string("LIST") | qi::string("SET") | qi::string("BAG");
      auto const container_of_pod = container_types >> -(qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']'))  >> qi::lit("OF") >> qi::as_string[pods][phoenix::ref(this_pod) = qi::_1];
      attribute_position = current_attribute_definition->begin();
      qi::phrase_parse(attribute_position, current_attribute_definition->end(), optional >> container_of_pod, qi::space);
      if (attribute_position == current_attribute_definition->end()) {
        this->entity_attributes[entity_name].push_back("std::vector<" + pod_types[this_pod] + "> " + format_attribute(*current_attribute_name) + ";");
        if (this_pod == "REAL") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_list_of_doubles(object_attributes[%d]);");
        else if (this_pod == "BOOLEAN") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_list_of_booleans(object_attributes[%d]);");
        else if (this_pod == "INTEGER") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_integer(object_attributes[%d]);");
        else if (this_pod == "STRING") this->entity_parsing_attributes[entity_name].push_back("o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_string(object_attributes[%d]);");
        else if (this_pod == "LOGICAL") this->entity_parsing_attributes[entity_name].push_back("//o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_logical(object_attributes[%d]);");
        else if (this_pod == "NUMBER") this->entity_parsing_attributes[entity_name].push_back("//o->" + format_attribute(*current_attribute_name) + " = step_parser.parse_unsigned_integer(object_attributes[%d]);");
        else this->entity_parsing_attributes[entity_name].push_back("//TODO: parse other container of pod");
        ++current_attribute_name;
        ++current_attribute_definition;
        ++parsed_entity_attributes;
        continue;
      }

      // Try as a container of another type
      auto const container_of_another_type = container_types >> -(qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']'))  >> qi::lit("OF") >> -qi::lit("UNIQUE") >> qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(this_type) = qi::_1];
      attribute_position = current_attribute_definition->begin();
      qi::phrase_parse(attribute_position, current_attribute_definition->end(), optional >> container_of_another_type, qi::space);
      if (attribute_position == current_attribute_definition->end()) {
        std::string this_code = "\tstd::vector<" + format_name(this_type);
        if (types_code.count(this_type) == 0 && enumerations_code.count(this_type) == 0) this_code += " *";
        this_code += "> " + format_attribute(*current_attribute_name) + ";\n";
        this->entity_attributes[entity_name].push_back(this_code);
        this->entity_parsing_attributes[entity_name].push_back("for (auto i : step_parser.parse_list_of_links(object_attributes[%d])) o->" + format_attribute(*current_attribute_name) + ".push_back((" + format_name(this_type) + " *)i);\nlists_of_links_to_resolve.push_back((std::vector<Ifc *> *)&o->" + format_attribute(*current_attribute_name) + ");");
        ++current_attribute_name;
        ++current_attribute_definition;
        ++parsed_entity_attributes;
        continue;
      }

      // Try as a container of a container another type
      auto const container_of_container_of_another_type = container_types >> qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']')  >> qi::lit("OF") >> -qi::lit("UNIQUE") >> container_types >> qi::lit('[') >> qi::uint_ >> qi::lit(':') >> (qi::uint_ | qi::char_('?')) >> qi::lit(']')  >> qi::lit("OF") >> -qi::lit("UNIQUE") >> qi::as_string[qi::lexeme[+qi::alnum]][phoenix::ref(this_type) = qi::_1];
      attribute_position = current_attribute_definition->begin();
      qi::phrase_parse(attribute_position, current_attribute_definition->end(), optional >> container_of_container_of_another_type, qi::space);
      if (attribute_position == current_attribute_definition->end()) {
        std::string this_code = "\tstd::vector<std::vector<" + format_name(this_type);
        if (types_code.count(this_type) == 0 && enumerations_code.count(this_type) == 0) this_code += " *";
        this_code += ">> " + format_attribute(*current_attribute_name) + ";\n";
        this->entity_attributes[entity_name].push_back(this_code);
        this->entity_parsing_attributes[entity_name].push_back("\t\t//TODO: parse container of container\n");
        ++current_attribute_name;
        ++current_attribute_definition;
        ++parsed_entity_attributes;
        continue;
      }
      
      // Couldn't be parsed
      std::cout << "Entity: " << entity_name << std::endl;
      std::cout << "Attribute: " << *current_attribute_definition << std::endl;
      not_parsed = true;
      ++current_attribute_name;
      ++current_attribute_definition;
      ++unparsed_entity_attributes;
    }

    // Constructor & <<operator
    if (abstract) {
      abstract_entities.insert(entity_name);
    }

    if (not_parsed) {
//      std::cout << "Entity: " << entity_name << std::endl;
//      std::cout << "\tSuperclasses: ";
//      for (auto sc : entity_superclasses) std::cout << sc << " ";
//      std::cout << std::endl;
//      std::cout << "\tSubclasses: ";
//      for (auto sc : entity_subclasses) std::cout << sc << " ";
//      std::cout << std::endl;
//      std::cout << "\tAttributes: " << entity_attributes << std::endl;
//      std::cout << "\tDerives: " << entity_derives << std::endl;
//      std::cout << "\tInverses: " << entity_inverses << std::endl;
//      std::cout << "\tUniques: " << entity_uniques << std::endl;
//      std::cout << "\tWheres: " << entity_wheres << std::endl;
      ++unparsed_entities;
    } else {
      ++parsed_entities;
      return;
    }
  }
}

void Express_parser::parse_schema(const std::string &contents) {
  //  std::cout << "Parse schema" << std::endl;
  
  std::vector<std::string> raw_statements;
  
  auto const comment = qi::lit("(*") >> *(!qi::lit("*)") >> qi::char_) >> qi::lit("*)");
  auto const constant = qi::as_string[qi::lexeme[qi::string("CONSTANT") >> +(!qi::lit("END_CONSTANT") >> qi::char_) >> qi::string("END_CONSTANT") >> qi::char_(';')]];
  auto const type = qi::as_string[qi::lexeme[qi::string("TYPE") >> +(!qi::lit("END_TYPE") >> qi::char_) >> qi::string("END_TYPE") >> qi::char_(';')]];
  auto const entity = qi::as_string[qi::lexeme[qi::string("ENTITY") >> +(!qi::lit("END_ENTITY") >> qi::char_) >> qi::string("END_ENTITY") >> qi::char_(';')]];
  auto const function = qi::as_string[qi::lexeme[qi::string("FUNCTION") >> +(!qi::lit("END_FUNCTION") >> qi::char_) >> qi::string("END_FUNCTION") >> qi::char_(';')]];
  auto const rule = qi::as_string[qi::lexeme[qi::string("RULE") >> +(!qi::lit("END_RULE") >> qi::char_) >> qi::string("END_RULE") >> qi::char_(';')]];
  auto const statements = +(comment | constant | type | entity | function | rule);
  
  std::string::const_iterator position = contents.begin();
  qi::phrase_parse(position, contents.end(), statements, qi::space, raw_statements);
  
  // Couldn't parse all
  if (position != contents.end()) {
    std::cout << "Stuck at ->";
    while (position != contents.end()) {
      std::cout << *position;
      ++position;
    }
  }
  
  for (const auto &s : raw_statements) {
    if (s.substr(0, 4) == "TYPE") parse_type(s);
    else if (s.substr(0, 6) == "ENTITY") parse_entity(s);
  }
  
  std::cout << "Parsed " << types_code.size() << "/" << types_code.size()+unparsed_types << " types, " << parsed_entities << "/" << parsed_entities+unparsed_entities << " entities, " << parsed_entity_attributes << "/" << parsed_entity_attributes+unparsed_entity_attributes << " entity attributes" << "." << std::endl;
}

void Express_parser::parse_express(const std::string &contents) {
  
  std::vector<std::string> raw_statements;
  std::string schema_version;
  
  auto const schema = qi::lit("SCHEMA") >> qi::omit[qi::as_string[+(qi::alnum | qi::char_('_'))][phoenix::ref(schema_version) = qi::_1]] >> qi::lit(';') >> qi::lexeme[+(!qi::lit("END_SCHEMA") >> qi::char_)] >> qi::lit("END_SCHEMA") >> qi::lit(";");
  auto const comment = qi::lit("(*") >> qi::omit[*(!qi::lit("*)") >> qi::char_)] >> qi::lit("*)");
  auto const statements = +(comment | schema);
  
  std::string::const_iterator position = contents.begin();
  qi::phrase_parse(position, contents.end(), statements, qi::space, raw_statements);
  
  // Couldn't parse all
  if (position != contents.end()) {
    std::cout << "Stuck at ->";
    while (position != contents.end()) {
      std::cout << *position;
      ++position;
    }
  }
  
  std::cout << "Schema: " << schema_version << std::endl;
  
  for (const auto &s : raw_statements) {
    parse_schema(s);
  }
}

void Express_parser::parse_file(const char *path) {
  std::ifstream in_stream(path);
  
  if (!in_stream) {
    return;
  }
  
  std::string contents;
  in_stream.seekg(0, std::ios::end);
  contents.resize(in_stream.tellg());
  in_stream.seekg(0, std::ios::beg);
  in_stream.read(&contents[0], contents.size());
  in_stream.close();
  
  parse_express(contents);
}

void Express_parser::generate_hpp(const char *path) {
  std::ofstream out_stream(path);
  
  std::set<std::string> in_output;
  std::list<std::string> types_to_do;
  
  if (!out_stream) {
    return;
  }
  
  out_stream << "#ifndef Ifc_parser_h\n#define Ifc_parser_h\n\n#include <boost/algorithm/string.hpp>\n\n#include \"Step_parser.hpp\"\n\n// Defined types (" << types_code.size() << ")\n";
  
  // Types
  for (auto const &type : types_code) {
    bool dependencies_met = true;
    for (auto const &dependency : dependencies[type.first]) {
      if (in_output.count(dependency) == 0) {
        dependencies_met = false;
        break;
      }
    } if (dependencies_met) {
      out_stream << type.second << std::endl;
      in_output.insert(type.first);
    } else {
      types_to_do.push_back(type.first);
    }
  } unsigned int max_failed_iterations = 100000;
  while (!types_to_do.empty() && max_failed_iterations > 0) {
    bool dependencies_met = true;
    for (auto const &dependency : dependencies[types_to_do.front()]) {
      if (in_output.count(dependency) == 0) {
        dependencies_met = false;
        break;
      }
    } if (dependencies_met) {
      out_stream << types_code[types_to_do.front()] << std::endl;
      in_output.insert(types_to_do.front());
    } else {
      types_to_do.push_back(types_to_do.front());
    } types_to_do.pop_front();
    --max_failed_iterations;
  } if (!types_to_do.empty()) {
    std::cout << types_to_do.size() << " type(s) have entity dependencies:" << std::endl;
    for (auto const &current_item : types_to_do) {
      std::cout << "\t" << current_item << " as " << types_code[current_item] << std::endl;
    }
  }
  
  // Enums
  out_stream << "\n// Enums (" << enumerations_code.size() << ")\n";
  for (auto const &enumeration : enumerations_code) {
    out_stream << enumeration.second << std::endl;
    in_output.insert(enumeration.first);
  }
}