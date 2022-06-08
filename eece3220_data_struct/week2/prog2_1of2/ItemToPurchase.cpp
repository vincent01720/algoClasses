#include<iostream>
using namespace std;
#include "ItemToPurchase.h"

void ItemToPurchase::SetName(string item){itemName = item;}
string ItemToPurchase::GetName() const {return itemName;}
void ItemToPurchase:: SetPrice(int price){itemPrice = price;}
int ItemToPurchase::GetPrice() const{return itemPrice;};
void ItemToPurchase::SetQuantity(int quantity){itemQuantity = quantity;};
int ItemToPurchase::GetQuantity() const{return itemQuantity;}