#include <iostream>
#include <string>
using namespace std;

class City {
   public:
      void SetName(string cityName) {
         name = cityName;
      }
      void SetCountry(string cityCountry) {
         country = cityCountry;
      }
      void Print() const;

   private:
      string name;
      string country;
};

void City::Print() const {
   cout << name << " in " << country << endl;
}

int main() {
   City myCity;

   myCity.SetName("Kingston");
   myCity.SetCountry("Jamaica");

   myCity.Print();

   return 0;
}