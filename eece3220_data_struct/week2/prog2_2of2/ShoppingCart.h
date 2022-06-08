#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

/* Type your code here */
class ShoppingCart{
   public:
        ShoppingCart():customerName("none"), currentDate("January 1, 2016") {}
        //void SetName(string item);
        ShoppingCart(string custo, string dd){
             customerName = custo;
             currentDate = dd;
        }
        string GetCustomerName() const;
        //void SetPrice(int price);
        string GetDate() const;
        void AddItem(ItemToPurchase item);
        void RemoveItem(string item);
        void ModifyItem(ItemToPurchase);
        int GetNumItemsIncart() const;
        int GetCostOfCart() const;
        void PrintTotal() const;
        void PrintDescriptions() const;

   private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;
};

#endif