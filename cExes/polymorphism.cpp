#include<iostream>
using namespace std;

bool Test(){
    return true;
};

class Conversion : public Temperature {
  public:
    double ConvertTo(char unit, double temp) {
      if (unit == 'C' || unit == 'c') {
        return Celsius(temp);
      } 
      else if (unit == 'F' || unit == 'f') {
        return Fahrenheit(temp);
      }
      return -0.0001;
    }
  
  private:
    double Celsius(double temp) {
      return (temp - 32) / 1.8;
    }
  
    double Fahrenheit(double temp) {
      return temp * 1.8 + 32;
    }
};