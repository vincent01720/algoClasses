// Examples of static_cast and reinterpret_cast
#include <iostream>
#include <string>
#include <bitset>

using namespace std;


int main()
{
    float f1;
    unsigned int u1;
	
	cout << "Example of static_cast:\n";
	
    cout << "Please enter a floating point number: ";
    cin >> f1;
    u1 = static_cast<unsigned int>(f1);
	cout << f1 << " static_cast as unsigned int is " << u1 << endl << endl;

	
	cout << "Examples of reinterpret_cast:\n";
	    
    cout << "Please enter an unsigned integer in hexadecimal format (e.g., 0x41200000): ";
    cin >> hex >> u1;
    cout << "0x" << hex << u1 << " re-interpreted as a floating point number is " << *reinterpret_cast<float*>(&u1) << endl;
    
    cout << "Please enter a floating point number: ";
    cin >> f1;
    u1 = *reinterpret_cast<unsigned int*>(&f1);
    cout << f1 << " re-interpreted as an unsigned long integer is 0x" << hex << u1 << " or binary " << bitset<32>(u1) << endl;
}
