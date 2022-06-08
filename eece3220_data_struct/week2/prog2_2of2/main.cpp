
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

int main() {
   ItemToPurchase item1;
   
   string name;
   string customer_name;
   string customer_date;
   string description;
   int price;
   int quantity;

   cout << "Enter customer's name:" << endl;
   getline(cin, customer_name);
   cout << "Enter today's date:" << endl;
   getline(cin, customer_date);
   ShoppingCart cart1(customer_name, customer_date);
   cout << endl;
   cout << "Customer name: "<<cart1.GetCustomerName() << endl;
   cout << "Today's date: "<<cart1.GetDate() << endl;
   cout << endl;
   //cin.ignore();
   
    // Item 1:
/*    cout << "Item 1" << endl;
   cout << "Enter the item name:" << '\n';
   getline(cin,name);
   item1.SetName(name);

   cout << "Enter the item description:" << '\n';
   getline(cin, description);
   item1.SetDescription(description);
   
   cout << "Enter the item price:" << '\n';
   cin >> price;
   item1.SetPrice(price);
   
   cout << "Enter the item quantity:" << '\n';
   cin >> quantity;
   item1.SetQuantity(quantity);
   
   cart1.AddItem(item1);
   cart1.AddItem(item1);
   cart1.AddItem(item1);
   cart1.PrintTotal();
   cart1.PrintDescriptions(); */
   return 0;
}