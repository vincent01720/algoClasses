#include<iostream>
using namespace std;

int main(){
    double amount;
    double interest_rate;
    int length_months;
    double monthly_payment;
    while(amount!=0){
        cout << "Enter the amount: \n";
        cin >> amount;

        cout << "Enter the interest rate: \n";
        cin >> interest_rate ;

        cout << "Length of the loan: \n";
        cin >> length_months;

        monthly_payment = (amount + amount*interest_rate/100)/12;
    
        cout << "your monthly payment is: " << monthly_payment << endl;
    }
}