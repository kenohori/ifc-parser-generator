//
//  Step_parser.hpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#ifndef Step_parser_hpp
#define Step_parser_hpp

#include <string>
#include <vector>

#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>
#include <boost/spirit/include/phoenix_stl.hpp>
#include <boost/spirit/include/qi.hpp>

namespace qi = boost::spirit::qi;
namespace phoenix = boost::phoenix;

class Step_parser {
public:
  bool parse_boolean(const std::string &definition);
  int parse_integer(const std::string &definition);
  double parse_double(const std::string &definition);
  std::string parse_string(const std::string &definition);
  std::string parse_constant(const std::string &definition);
  std::vector<double> parse_list_of_doubles(const std::string &definition);
  std::vector<std::string> parse_list_of_strings(const std::string &definition);
  std::uintptr_t parse_link(const std::string &definition);
  std::vector<std::uintptr_t> parse_list_of_links(const std::string &definition);
};

#endif /* Step_parser_hpp */
