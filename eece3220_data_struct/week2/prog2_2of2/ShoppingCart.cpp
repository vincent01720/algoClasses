#include<iostream>
using namespace std;
#include "ShoppingCart.h"

string ShoppingCart::GetCustomerName() const{return customerName;}
string ShoppingCart::GetDate() const{return currentDate;}
void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string itemName){
    int nitem_remove = 0;
    for(unsigned int i=0; i<cartItems.size(); ++i){
        if (itemName == cartItems.at(i).GetName())
        {
            //cartItems.erase(i);
            nitem_remove += 1;
        }
    }
    if (nitem_remove == 0)
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
    
}
void ShoppingCart::ModifyItem(ItemToPurchase item){

}
int ShoppingCart::GetNumItemsInCart() const{
    int q_all_items = 0;
    for(unsigned int i=0; i<cartItems.size(); i++){
        q_all_items = q_all_items + cartItems.at(i).GetQuantity();
    }
    return q_all_items;
}

int ShoppingCart::GetCostOfCart() const{
    int cart_cost_total = 0;
    for(unsigned int i=0; i<cartItems.size(); i++){
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
        cout << endl;
        cout << "SHOPING CART IS EMPTY" << endl;
        cout << endl;
        cout << "Total: $0" << endl;
    }else{
        cout <<"Number of Items: "<< cart_items_total << endl;
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
