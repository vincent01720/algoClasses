// Examples of string operations
#include <iostream>
#include <string>

using namespace std;


int main()
{
   // Examples of string comparisons
   
   string s1 = "Aardvark";
   string s2 = "Albatross";
  
   if (s1 < s2)
      cout << s1 << " is less than " << s2 << endl;
   else
      cout << s1 << " is greater than/equal to " << s2 << endl;
    
/*
   // Examples of character access within a string
   
   string userWord;

   cout << "Enter a 5-letter word: ";
   cin  >> userWord;

   cout << "Scrambled: ";
   cout << userWord.at(3); // using member function at()
   cout << userWord.at(1);
   cout << userWord.at(4);
   cout << userWord.at(0);
   cout << userWord[2]; // using overloaded operator[]
   cout << endl;
*/

/*
   // Examples of string find() and substr() member functions
   
   string emailText;
   int atSymbolIndex;
   string emailUsername;

   cout << "Enter email address: ";
   cin  >> emailText;

   atSymbolIndex = emailText.find('@');
   if (atSymbolIndex == string::npos) {
      cout << "Address is missing @" << endl;
   }
   else {
      emailUsername = emailText.substr(0, atSymbolIndex);
      cout << "Username: " << emailUsername << endl;
   }
*/

   return 0;
}
