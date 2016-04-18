#include <vector>

#include "Ifc_parser.hpp"

Ifc *Ifc_parser::parse_object_definition(const std::string &definition) {
//  std::cout << "\tObject: " << definition << std::endl;
  
  Object_definition object_definition;
  
  Object_definition_parser<std::string::const_iterator> parser;
  
  std::string::const_iterator iter = definition.begin();
  bool r = qi::phrase_parse(iter, definition.end(), parser, qi::space, object_definition);
  
  if (r && iter == definition.end()) {
    return ifc_schema.parse_ifc_object_definition(object_definition.object_class, object_definition.object_attributes);
  } else {
//    std::cout << "\tClass " << object_definition.object_class << " with attributes: ";
//    for (auto &a : object_definition.object_attributes) {
//      std::cout << a << " ";
//    } std::cout << std::endl;
    return new Ifc();
  }
}

void Ifc_parser::parse_statement(const std::string &statement) {
  std::cout << "Statement: " << statement << std::endl;
  
  std::string object_definition = "";
  unsigned int object_id = 0;
  
  auto const ifc_object = '#' >> qi::uint_[phoenix::ref(object_id) = qi::_1] >> '=' >> qi::as_string[qi::lexeme[+qi::char_]][phoenix::ref(object_definition) = qi::_1];
  
  qi::phrase_parse(statement.begin(), statement.end(), ifc_object, qi::space);
  
  if (object_id != 0) {
    contents[object_id] = parse_object_definition(object_definition);
    
    std::cout << "\t" << contents[object_id] << " [" << object_id << "] = ";
    ifc_schema.print_object_info(contents[object_id]);
    std::cout << std::endl;
    
  }
}

void Ifc_parser::resolve_links() {
  for (auto link : ifc_schema.links_to_resolve) {
//    std::cout << "Resolving link at " << link << " containing " << (std::uintptr_t)*link << "..." << std::endl;
    *link = contents[(std::uintptr_t)*link];
//    std::cout << "\tSetting to " << contents[(std::uintptr_t)*link] << std::endl;
//    Ifc_entity *link_as_pointer = (Ifc_entity *)link;
//    link_as_pointer = contents[(std::uintptr_t)link];
  }
  
  for (auto list_of_links : ifc_schema.lists_of_links_to_resolve) {
//    std::cout << "Resolving list at " << list_of_links << "..." << std::endl;
    for (auto &link : *list_of_links) {
//      std::cout << "\tResolving link at " << &link << " containing " << link << "..." << std::endl;
      if (link == 0) continue;
      link = contents[(std::uintptr_t)link];
    }
  }
}

void Ifc_parser::parse_file(const char *path) {
  
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
  
  std::vector<std::string> raw_statements;
  
  auto const string = qi::char_('\'') >> qi::lexeme[*~qi::char_('\'')] >> qi::char_('\'');
  auto const token = (+~qi::char_(";'")) | string;
  auto const statement = qi::as_string[+token] % ';';

  qi::phrase_parse(contents.begin(), contents.end(), *statement, qi::space, raw_statements);
  
  for (auto &s : raw_statements) {
    parse_statement(s);
  }
  
  resolve_links();
}