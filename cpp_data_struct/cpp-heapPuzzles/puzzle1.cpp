#include <iostream>

using std::cout;
using std::endl;

void GetSquare(int& number){
  number *= number;
}

int main() {
    int testnumber = 5;
    GetSquare(testnumber);
    cout << "Square of " << testnumber << " is " << testnumber << endl;
    return 0;

/*   int  i =  2,  j =  4,  k =  8;
  int *p = &i, *q = &j, *r = &k;
  int myNumbers[2] = {13,12};
  int *ptrNumbers = myNumbers;
  //cout << ptrNumbers << endl;

  for(int i = 1; i < 3; i++)
    cout << "Element: " << *(ptrNumbers+i) << endl; */

  //k = i;
/*   cout << i << j << k << *p << *q << *r << endl;
  cout << p << ' ' << q << ' ' << r << endl;
  cout << &i << ' ' << &j << ' ' << &k << endl;  */
  //cout << *i << ' ' << *j << ' ' << *k << endl; 

/*   p = q;
  cout << i << j << k << *p << *q << *r << endl;

  *q = *r;
  cout << i << j << k << *p << *q << *r << endl; */

/*   int original = 30;
  cout << "Original = " << original << endl;
  cout << "Address of Original is: " << &original << endl;

  int& ref1 = original;
  cout << "& ref1 is: " << &ref1 << endl;

  int& ref2 = ref1;
  cout << "&ref2 is: " << &ref2 << endl;
  cout << " ref2 is: " << ref2 << endl;

  cout << "Address of Original is: " << &original <<" and " << &ref2 << endl;

  return 0; */
}
