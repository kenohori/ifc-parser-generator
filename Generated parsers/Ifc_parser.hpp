#ifndef Ifc_parser_hpp
#define Ifc_parser_hpp

#include <fstream>
#include <map>

#include "Ifc_2x_schema.hpp"

struct Object_definition {
  std::string object_class;
  std::vector<std::string> object_attributes;
};

BOOST_FUSION_ADAPT_STRUCT(
  Object_definition,
  (std::string, object_class)
  (std::vector<std::string>, object_attributes)
)

template <typename Iterator>
struct Object_definition_parser : qi::grammar<Iterator, Object_definition> {
  Object_definition_parser() : Object_definition_parser::base_type(object_definition) {
    constant %= qi::char_('.') >> qi::lexeme[+~qi::char_('.')] >> qi::char_('.');
    string %= qi::char_('\'') >> qi::lexeme[*~qi::char_('\'')] >> qi::char_('\'');
    link %= qi::char_('#') >> +qi::digit;
    number %= -qi::char_("+-") >> +qi::digit >> -(qi::char_('.') >> *qi::digit) >> -(qi::char_('E') >> -qi::char_("+-") >> +qi::digit);
    
    list %= qi::char_('(') >> -(attribute >> *(qi::char_(',') >> attribute)) >> qi::char_(')');
    flat_object_definition %= +qi::alnum >> list;
    attribute %= qi::char_("$*") | constant | string | link | number | list | flat_object_definition;

    attributes %= attribute % ',';
    object_definition %= +qi::alnum >> '(' >> attributes >> ')';
  }

  qi::rule<Iterator, std::string()> constant, string, link, number;
  qi::rule<Iterator, std::string()> list, flat_object_definition, attribute;
  qi::rule<Iterator, std::vector<std::string>()> attributes;
  qi::rule<Iterator, Object_definition> object_definition;
};

class Ifc_parser {
private:
  Ifc_2x3 ifc_schema;
  
  Ifc *parse_object_definition(const std::string &definition);
  void parse_statement(const std::string &statement);
  void resolve_links();
  
public:
  std::map<std::uintptr_t, Ifc *> contents;
  
  void parse_file(const char *path);
};

#endif /* Ifc_parser_hpp */