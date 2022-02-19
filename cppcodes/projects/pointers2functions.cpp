#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, const double* const ptrRadius, double* const ptrArea ){
    if (ptrPi && ptrRadius && ptrArea)
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main(){
    const double my_pi = 22/7.0;
    cout << "Enter radius: ";
    double my_radius = 100;
    double my_area = 0;
    CalcArea(&my_pi, &my_radius, &my_area);
    cout << my_area << endl;

    int myNumbers[5] = {1, 2, 3, 5, 7};
    int *pTomyNumbers = myNumbers;
    int *ptrTest = &myNumbers[1];
    cout << "pTomynumbers: "<< myNumbers << endl;
    cout << "ptrTest: "<< ptrTest << endl;

}