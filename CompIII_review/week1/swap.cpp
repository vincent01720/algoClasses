#include <iostream>

using namespace std;

// Pass-by-value
void swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

/* // C-style "simulated pass-by-reference" using pointers
void swap2(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
} */

// C++ pass-by-reference
void swap3(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


int main() {
    int a = 10;
    int b = 20;
    
    cout << "Initially: a == " << a << ", b == " << b << endl;
    
    swap1(a, b);
    cout << "After swap1: a == " << a << ", b == " << b << endl;
    
/*     swap2(&a, &b);
    cout << "After swap2: a == " << a << ", b == " << b << endl; */
    
    swap3(a, b);
    cout << "After swap3: a == " << a << ", b == " << b << endl;
}