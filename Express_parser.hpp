//
//  Express_parser.hpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#ifndef Express_parser_hpp
#define Express_parser_hpp

#include <fstream>
#include <boost/algorithm/string.hpp>
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>
#include <boost/spirit/include/phoenix_stl.hpp>

namespace qi = boost::spirit::qi;
namespace phoenix = boost::phoenix;

class Express_parser {
  std::map<std::string, std::string> pod_types;
  std::set<std::string> reserved_keywords;
  
  unsigned int unparsed_types, unparsed_entities, parsed_entities, unparsed_entity_attributes, parsed_entity_attributes;
  std::map<std::string, std::string> types_code, enumerations_code, selects_code;
  std::map<std::string, std::list<std::string>> dependencies; // key depends on values
  std::map<std::string, std::tuple<std::list<std::string>, std::list<std::string>, std::list<std::string>>> entity_attributes; // name, definition, parser
  std::set<std::string> abstract_entities;
  
  std::string format_attribute(const std::string &ifc_name);
  std::string format_name(const std::string &ifc_name);
  
  void parse_type(const std::string &contents);
  void parse_entity(const std::string &contents);
  void parse_schema(const std::string &contents);
  void parse_express(const std::string &contents);
  
public:
  Express_parser();
  
  void parse_file(const char *path);
  void generate_hpp(const char *path);
  void generate_cpp(const char *path);
};

#endif /* Express_parser_hpp */
