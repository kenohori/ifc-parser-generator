//
//  main.cpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori
//

#include "Express_parser.hpp"

int main(int argc, const char * argv[]) {
  Express_parser schema_2x, schema_2x2, schema_2x3, schema_4, schema_4_add1;
  
  schema_2x.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/Ifc2x_all_lf.exp");
  schema_2x.generate_hpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x_schema.hpp");
  schema_2x.generate_cpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x_schema.cpp");
  
  schema_2x2.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC2X2_FINAL.exp");
  schema_2x2.generate_hpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x2_schema.hpp");
  schema_2x2.generate_cpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x2_schema.cpp");
  
  schema_2x3.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC2X3_TC1.exp");
  schema_2x3.generate_hpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x3_schema.hpp");
  schema_2x3.generate_cpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_2x3_schema.cpp");
  
  schema_4.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC4.exp");
  schema_4.generate_hpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_4_schema.hpp");
  schema_4.generate_cpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_4_schema.cpp");
  
  schema_4_add1.parse_file("/Users/ken/Versioned/ifc-parser-generator/IFC schemata/IFC4_ADD1.exp");
  schema_4_add1.generate_hpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_4_add_1_schema.hpp");
  schema_4_add1.generate_cpp("/Users/ken/Versioned/ifc-parser-generator/Generated parsers/Ifc_4_add_1_schema.cpp");
  
  return 0;
}
