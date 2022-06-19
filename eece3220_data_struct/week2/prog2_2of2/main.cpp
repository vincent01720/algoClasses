
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

void PrintMenu(ShoppingCart cart){
   char userInp;
   ItemToPurchase item;
   string name;
   string description;
   int quantity;
   int price;

   do{
      cout << "MENU" << endl;
      cout << "a - Add item to cart" << endl;
      cout << "d - Remove item from cart" << endl;
      cout << "c - Change item quantity" << endl;
      cout << "i - Output items' descriptions" << endl;
      cout << "o - Output shopping cart" << endl;
      cout << "q - Quit" << endl;
      cout << endl;
      cout << "Choose an option:" << endl;
      cin >> userInp;
      if(userInp == 'o'){
         cout << "OUTPUT SHOPPING CART" << endl;
         cart.PrintTotal();
         cout << endl;
      } else if(userInp == 'a'){
         cout << "ADD ITEM TO CART" << endl;
         cin.ignore();
         cout << "Enter the item name: " <<endl;
         getline(cin,name);
         item.SetName(name);
         cout << "Enter the item description:"<<endl;
         //cin.ignore();
         getline(cin,description);
         item.SetDescription(description);
         cout << "Enter the item price:";
         cin >> price;
         item.SetPrice(price);
         cout << "Enter the item quantity:";
         cin >> quantity;
         item.SetQuantity(quantity);
         cart.AddItem(item);
         cout << endl;
         } else if(userInp == 'd'){
         cout << "REMOVE ITEM FROM CART" << endl;
         cin.ignore();
         cout << "Enter name of item remove: " <<endl;
         getline(cin,name);
         cart.RemoveItem(name);
      } }while(userInp != 'q');
   }

int main() {
   ItemToPurchase item1("Water", "summer fall", 5, 6);
   ItemToPurchase item2("Coke", "low calories", 12, 3);
   
   string name;
   string customer_name;
   string customer_date;
   string description;

   cout << "Enter customer's name:" << endl;
   getline(cin, customer_name);
   cout << "Enter today's date:" << endl;
   getline(cin, customer_date);
   ShoppingCart cart1(customer_name, customer_date);
   cout << endl;
   cout << "Customer name: "<<cart1.GetCustomerName() << endl;
   cout << "Today's date: "<<cart1.GetDate() << endl;
   cout << endl;
   
   //cart1.AddItem(item1);
   //cart1.AddItem(item2);
   PrintMenu(cart1);
   return 0;
}