#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   ItemToPurchase item1;
    ItemToPurchase item2;
    string name;
    int price;
    int quantity;

    // Item 1:
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << '\n';
    getline(cin,name);
    item1.SetName(name);
    cout << "Enter the item price:" << '\n';
    cin >> price;
    item1.SetPrice(price);
    cout << "Enter the item quantity:" << '\n';
    cin >> quantity;
    item1.SetQuantity(quantity);
    cin.ignore(); // clear cin buffer
    cout << endl;
    // Item 2:

    cout << "Item 2" << endl;
    cout << "Enter the item name:" << '\n';
    getline(cin,name);
    item2.SetName(name);
    cout << "Enter the item price:" << '\n';
    cin >> price;
    item2.SetPrice(price);
    cout << "Enter the item quantity:" << '\n';
    cin >> quantity;
    item2.SetQuantity(quantity);
    cout << '\n';

    // Price of each item and total items
    float total1 = item1.GetPrice()*item1.GetQuantity();
    float total2= item2.GetPrice()*item2.GetQuantity();
    cout << "TOTAL COST" << endl;
    cout << item1.GetName() <<" "<<item1.GetQuantity() << " @ " << "$" <<item1.GetPrice() << " = $"<<item1.GetPrice()*item1.GetQuantity() << '\n';
    cout << item2.GetName() <<" "<<item2.GetQuantity() << " @ " << "$" <<item2.GetPrice() << " = $"<<item2.GetPrice()*item2.GetQuantity() << '\n';
    cout << '\n';
    cout << "Total: $"<<total1+total2 << endl;
   return 0;
}