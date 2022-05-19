#include <iostream>
using namespace std;

// pass by value
void ConvHrMin(int timeVal, int hrVal, int minVal) {
   hrVal  = timeVal / 60;  
   minVal = timeVal % 60;
}

/*
// pass by reference
void ConvHrMin(int timeVal, int& hrVal, int& minVal) {
   hrVal = timeVal / 60;
   minVal = timeVal % 60;
}
*/

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime;

   ConvHrMin(totTime, usrHr, usrMin);

   cout << "Equals: ";
   cout << usrHr << " hrs ";
   cout << usrMin << " mins" << endl;

   return 0;
}
