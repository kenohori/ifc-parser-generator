//
//  main.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Express_parser.hpp"

int main(int argc, const char * argv[]) {
  Express_parser parser_2x, parser_2x2, parser_2x3, parser_4, parser_4_add1;
  parser_2x.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/Ifc2x_all_lf.exp");
  parser_2x2.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC2X2_FINAL.exp");
  parser_2x3.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC2X3_TC1.exp");
  parser_4.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC4.exp");
  parser_4_add1.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC4_ADD1.exp");
  return 0;
}
