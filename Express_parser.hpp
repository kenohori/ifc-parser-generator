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
  void parse_schema(const std::string &contents);
  void parse_express(const std::string &contents);
  
public:
  Express_parser();
  
  void parse_file(const char *path);
};

#endif /* Express_parser_hpp */
