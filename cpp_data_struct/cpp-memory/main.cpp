/**
 * C++ program printing various memory values with references and pointers.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int num = 7;
  std::cout << " num: " <<  num << std::endl; // value is 7
  std::cout << "&num: " << &num << std::endl; // memory's address by pc, of num

  int *p = &num; // memory's address by pc now is named p
  std::cout << " p: " <<  p << std::endl; // memory's address of num
  std::cout << "&p: " << &p << std::endl; // memory's address of p
  std::cout << "*p: " << *p << std::endl; // number is 7

  *p = 42;
  std::cout << "*p changed to 42" << std::endl; // number changed to 42
  std::cout << " num: " <<  num << std::endl; // number changed to 42

  return 0;
}

