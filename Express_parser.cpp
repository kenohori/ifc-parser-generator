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
  
  pod_types["REAL"] = "double";
  pod_types["BOOLEAN"] = "bool";
  pod_types["INTEGER"] = "int";
  pod_types["STRING"] = "std::string";
  pod_types["LOGICAL"] = "int";
  pod_types["NUMBER"] = "unsigned int";
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
    auto const pods = qi::string("REAL") | qi::string("BOOLEAN") | qi::string("INTEGER") | qi::string("STRING") | qi::string("LOGICAL") | qi::string("NUMBER");
    std::string::iterator type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), pods, qi::space);
    if (type_position == type_definition.end()) {
      types_code[type_name] = "typedef " + pod_types[type_definition] + " " + format_name(type_name) + ";";
      return;
    }
    
    // Try as string of a given length
    auto const string_with_length = qi::lit("STRING") >> qi::lit('(') >> qi::uint_ >> qi::lit(')') >> -qi::lit("FIXED");
    type_position = type_definition.begin();
    qi::phrase_parse(type_position, type_definition.end(), string_with_length, qi::space);
    if (type_position == type_definition.end()) {
      types_code[type_name] = "typedef std::string " + format_name(type_name) + ";";
      return;
    }

    // Try as a container of a pod type
    std::string this_pod;
    auto const container_types = qi::string("ARRAY") | qi::string("LIST") | qi::string("SET");
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
//    else if (s.substr(0, 6) == "ENTITY") parse_entity(s);
  }
  
  std::cout << "Parsed " << types_code.size() << "/" << types_code.size()+unparsed_types << " types, " << entities_code.size() << "/" << entities_code.size()+unparsed_entities << " entities." << std::endl;
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
  
//  std::cout << number_of_types << " types, " << number_of_entities << " entities." << std::endl;
}