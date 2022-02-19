/**
 * C++ program allocating and free'ing heap memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
using uiuc::Cube;

int main() {
  int *p = new int;
  Cube *c = new Cube;
  int a = 7;
  *p = 42;
  (*c).setLength(4);
  std::cout<<"the test is: "<<a;
  delete c;  c = nullptr;
  delete p;  p = nullptr;
  return 0;
}
