#include<iostream>
using namespace std;
#include "ShoppingCart.h"

string ShoppingCart::GetCustomerName() const{return customerName;}
string ShoppingCart::GetDate() const{return currentDate;}
void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string itemName){
    
}
void ShoppingCart::ModifyItem(ItemToPurchase item){

}
int ShoppingCart::GetNumItemsIncart() const{return cartItems.size();}
int ShoppingCart::GetCostOfCart() const{
    int cart_cost_total = 0;
    for(unsigned int i; i<cartItems.size(); i++){
        cart_cost_total = cart_cost_total + cartItems.at(i).GetPrice()*cartItems.at(i).GetQuantity();
    }
    return cart_cost_total;
}
void ShoppingCart::PrintTotal() const{
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    int cart_items_total = 0;
    for(unsigned int i=0; i<cartItems.size(); i++){
        cart_items_total = cart_items_total + cartItems.at(i).GetQuantity();
    }
    if(cart_items_total<1){
        cout << "SHOPING CART IS EMPTY" << endl;
    }else{
        cout <<"Number if Items: "<< cart_items_total << endl;
        cout << endl;
        int total_price = 0;
        for(unsigned int j=0; j<cartItems.size(); j++){
            cout << cartItems.at(j).GetName() <<" "<<cartItems.at(j).GetQuantity() << " @ " << "$" <<cartItems.at(j).GetPrice() << " = $"<<cartItems.at(j).GetPrice()*cartItems.at(j).GetQuantity() << '\n';
            total_price = total_price + cartItems.at(j).GetPrice()*cartItems.at(j).GetQuantity();
        }
        cout << endl;
        cout << "Total: $" << total_price << endl;
        cout << endl;
    }

}
void ShoppingCart::PrintDescriptions() const{
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << endl;
    cout << "Items Descriptions" << endl;
    for(unsigned int j=0; j<cartItems.size(); j++){
        cout << cartItems.at(j).GetName() <<": ";
        cartItems.at(j).PrintItemDescription();
        cout << endl;
    }

}
