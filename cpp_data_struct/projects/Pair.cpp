#include <iostream>
class Pair {
public:
  int *pa,*pb;
  Pair(int a, int b);
  Pair(const Pair & other);
  ~Pair();
  Pair& operator=(const Pair & other);
};

Pair::Pair(int a, int b){
  pa = new int;
  pb = new int;
  *pa = a;
  *pb = b;

  /* alternatively:
  pa = new int(a);
  pb = new int(b);
  */
}

Pair::Pair(const Pair & other){
  pa = new int;
  pb = new int;
  *pa = *(other.pa);
  *pb = *(other.pb);

  /* alternatively:
  pa = new int(*(other.pa));
  pb = new int(*(other.pb));
  */
}

Pair::~Pair(){
  delete pa;
  delete pb;
}

Pair& Pair::operator=(const Pair & other){
  *pa = *(other.pa);
  *pb = *(other.pb);
  return *this;
}

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  p = *hp;
  delete hp;

  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}