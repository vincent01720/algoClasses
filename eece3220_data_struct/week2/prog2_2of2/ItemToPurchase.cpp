#include<iostream>
using namespace std;
#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string item){itemName = item;}
string ItemToPurchase::GetName() const {return itemName;}
void ItemToPurchase::SetPrice(int price){itemPrice = price;}
int ItemToPurchase::GetPrice() const{return itemPrice;};
void ItemToPurchase::SetQuantity(int quantity){itemQuantity = quantity;};
int ItemToPurchase::GetQuantity() const{return itemQuantity;}
void ItemToPurchase::SetDescription(string description){itemDescription = description;}
string ItemToPurchase::GetDescription() const{return itemDescription;}
void ItemToPurchase::PrintItemCost() const {
    cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = $" <<GetQuantity()*GetPrice() <<endl;
}
void ItemToPurchase::PrintItemDescription() const {
    cout << GetName() << ": " << itemDescription <<endl;
}