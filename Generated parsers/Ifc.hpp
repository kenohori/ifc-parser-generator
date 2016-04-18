//
//  Ifc.hpp
//  ifc-parser-generator
//
//  Copyright © 2016 Ken Arroyo Ohori. All rights reserved.
//

#ifndef Ifc_hpp
#define Ifc_hpp

// Base class
struct Ifc {
  std::string entity;
  virtual ~Ifc() {}
};

#endif /* Ifc_hpp */
