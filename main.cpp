//
//  main.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Express_parser.hpp"

int main(int argc, const char * argv[]) {
  Express_parser parser;
  parser.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC2X3_TC1.exp");
  return 0;
}
