/**
 * C++ code showing improper use of memory (returning a reference to a stack variable).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

double someOtherFunction();  // Forward decl

#include <iostream>
#include "Cube.h"

Cube *CreateUnitCube() {
  Cube cube;
  cube.setLength(15);
  return &cube;
}

int main() {
  Cube c;
  c.setLength(0.48);
  double volume = c.getVolume();
  double surface = c.getSurfaceArea();
  std::cout << "Volume: " << volume << std::endl;
  std::cout << "Surface: " << surface << std::endl;
/*   Cube *c = CreateUnitCube();
  double a = c->getSurfaceArea();
  std::cout << "Surface: " << a << std::endl;
  return 0; */
}


// Some other function that does something that uses some stack memory.
// In this code, we calculate the total volume of cubes of length from 0..99.
double someOtherFunction() {
  Cube cubes[100];
  double totalVolume = 0;

  for (int i = 0; i < 100; i++) {
    cubes[i].setLength(i);
    totalVolume += cubes[i].getVolume();
  }

  return totalVolume;
}