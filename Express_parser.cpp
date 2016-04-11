//
//  Express_parser.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Express_parser.hpp"

Express_parser::Express_parser() {

}

void Express_parser::parse_schema(const std::string &contents) {
  //  std::cout << "Parse schema" << std::endl;
  
  std::vector<std::string> raw_statements;
  
  auto const type = qi::as_string[qi::lexeme[qi::string("TYPE") >> +(!qi::lit("END_TYPE") >> qi::char_) >> qi::string("END_TYPE") >> qi::char_(';')]];
  auto const entity = qi::as_string[qi::lexeme[qi::string("ENTITY") >> +(!qi::lit("END_ENTITY") >> qi::char_) >> qi::string("END_ENTITY") >> qi::char_(';')]];
  auto const function = qi::as_string[qi::lexeme[qi::string("FUNCTION") >> +(!qi::lit("END_FUNCTION") >> qi::char_) >> qi::string("END_FUNCTION") >> qi::char_(';')]];
  auto const rule = qi::as_string[qi::lexeme[qi::string("RULE") >> +(!qi::lit("END_RULE") >> qi::char_) >> qi::string("END_RULE") >> qi::char_(';')]];
  auto const statements = +(type | entity | function | rule);
  
  qi::phrase_parse(contents.begin(), contents.end(), statements, qi::space, raw_statements);
  
  for (const auto &s : raw_statements) {
//    if (s.substr(0, 4) == "TYPE") parse_type(s);
//    else if (s.substr(0, 6) == "ENTITY") parse_entity(s);
  }
  
}

void Express_parser::parse_express(const std::string &contents) {
  
  std::vector<std::string> raw_statements;
  std::string schema_version;
  
  auto const schema = qi::lit("SCHEMA") >> qi::omit[qi::as_string[+qi::alnum][phoenix::ref(schema_version) = qi::_1]] >> qi::lit(';') >> qi::lexeme[+(!qi::lit("END_SCHEMA") >> qi::char_)] >> qi::lit("END_SCHEMA") >> qi::lit(";");
  auto const comment = qi::lit("(*") >> qi::omit[*(!qi::lit("*)") >> qi::char_)] >> qi::lit("*)");
  auto const statements = +(comment | schema);
  
  qi::phrase_parse(contents.begin(), contents.end(), statements, qi::space, raw_statements);
  
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