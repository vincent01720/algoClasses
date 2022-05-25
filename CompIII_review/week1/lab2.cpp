#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;



void imperial2metric(int& x, double& y) {
    double remain;
    int temp;
    temp = x;
    x = floor(x*0.45359237);
    remain = (temp*0.45359237 - floor(temp*0.45359237))*1000; //remain is in grams
    y = remain + y*28.349523125;
}


int main() {
    int a = 5;
    double b = 13.5697;
    imperial2metric(a,b);
    cout << "kg == " << a << endl;;
    cout << fixed << setprecision(8)<< "grams == " << b << endl;
    
}
