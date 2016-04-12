//
//  Step_parser.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Step_parser.hpp"

bool Step_parser::parse_boolean(const std::string &definition) {
  bool boolean_result = false;
  char result = 'F';
  auto const boolean = '.' >> qi::char_[phoenix::ref(result) = qi::_1] >> '.';
  qi::phrase_parse(definition.begin(), definition.end(), boolean, qi::space);
  if (result == 'T' || result == 't') boolean_result = true;
  return boolean_result;
}

int Step_parser::parse_integer(const std::string &definition) {
  int result = 0;
  qi::phrase_parse(definition.begin(), definition.end(), qi::int_[phoenix::ref(result) = qi::_1], qi::space);
  return result;
}

double Step_parser::parse_double(const std::string &definition) {
  double result = 0.0;
  qi::phrase_parse(definition.begin(), definition.end(), qi::double_[phoenix::ref(result) = qi::_1], qi::space);
  return result;
}

std::string Step_parser::parse_string(const std::string &definition) {
  std::string result = "";
  auto const quoted_string = qi::as_string['\'' >> qi::lexeme[*~qi::char_('\'')] >> '\''][phoenix::ref(result) = qi::_1];
  auto const string = qi::char_('$') | quoted_string;
  qi::phrase_parse(definition.begin(), definition.end(), string, qi::space);
  return result;
}

std::string Step_parser::parse_constant(const std::string &definition) {
  std::string result = "";
  auto const constant = qi::as_string['.' >> qi::lexeme[+~qi::char_('.')] >> '.'][phoenix::ref(result) = qi::_1];
  qi::phrase_parse(definition.begin(), definition.end(), constant, qi::space);
  return result;
}

std::vector<double> Step_parser::parse_list_of_doubles(const std::string &definition) {
  std::vector<double> result;
  auto const list_of_doubles = '(' >> (qi::double_[phoenix::push_back(phoenix::ref(result), qi::_1)] % ',') >> ')';
  qi::phrase_parse(definition.begin(), definition.end(), list_of_doubles, qi::space);
  return result;
}

std::vector<std::string> Step_parser::parse_list_of_strings(const std::string &definition) {
  std::vector<std::string> result;
  auto const quoted_string = qi::as_string['\'' >> qi::lexeme[*~qi::char_('\'')] >> '\''][phoenix::push_back(phoenix::ref(result), qi::_1)];
  auto const list_of_strings = '(' >> (quoted_string % ',') >> ')';
  qi::phrase_parse(definition.begin(), definition.end(), list_of_strings, qi::space);
  return result;
}

std::uintptr_t Step_parser::parse_link(const std::string &definition) {
  std::uintptr_t result = 0;
  auto const link = '#' >> qi::uint_[phoenix::ref(result) = qi::_1];
  qi::phrase_parse(definition.begin(), definition.end(), link, qi::space);
  return result;
}

std::vector<std::uintptr_t> Step_parser::parse_list_of_links(const std::string &definition) {
  std::vector<std::uintptr_t> result;
  auto const list_of_links = '(' >> (('#' >> qi::uint_[phoenix::push_back(phoenix::ref(result), qi::_1)]) % ',') >> ')';
  qi::phrase_parse(definition.begin(), definition.end(), list_of_links, qi::space);
  return result;
}