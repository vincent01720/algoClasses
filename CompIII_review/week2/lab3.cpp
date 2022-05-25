#include <iostream>
using namespace std;

//DO NOT EDIT code below this line
//setMassAvoirdupoisPounds, setMassTroyPounds, and setMassMetricGrams
class Mass {
  public:
    Mass(double d) {
        drams = d;
    }

    //Dupois Pounds
    double getMassAvoirdupoisPounds() {
        return drams*1/256;
    }

    void setMassAvoirdupoisPounds(double dupois) {
        dupoisPounds = dupois;
    }

    //Troy Pounds
    double getMassTroyPounds(){
        return drams*1/96; 
    }

    void setMassTroyPounds(double troy){
        troyPounds =  troy;  
    }

    //Metric Grams
    double getMassMetricGrams(){
        return 1.77184519*drams;
    }

    void setMassMetricGrams(double metric){
        metricGrams = metric;
    }
  
  private: 
    double drams;
    double dupoisPounds;
    double troyPounds;
    double metricGrams;
};

int main(){
    Mass m(10.0);
    cout << "Test: " <<m.getMassMetricGrams() << endl;
    cout << "Test: " <<m.getMassMetricGrams() << endl;
    cout << "Test: " <<m.getMassMetricGrams() << endl;
}