// Examples of float versus integer zerodivide
#include <iostream>

using namespace std;


int main()
{
	// Floating point zerodivide: +/- inf (infinity) versus nan (Not a Number)
	cout << "1.0/0.0 == " << 1.0/0.0
		 << ", -1.0/0.0 == " << -1.0/0.0
		 << ", 0.0/0.0 == " << 0.0/0.0 << endl;
	
	// Integer zerodivide
	int i;
	cout << "Please enter an integer value (try 0!): ";		 
	cin >> i;
	cout << "i == " << i << endl;
	// If i==0, the division will cause an immediate program termination
	// (no error message!)
	cout << "1/i == " << 1/i << endl;
}
