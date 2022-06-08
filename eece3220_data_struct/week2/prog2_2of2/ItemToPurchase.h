#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
   public:
        ItemToPurchase():itemName("none"), itemDescription("none"), itemPrice(0), itemQuantity(0) {}
        void SetName(string item);
        string GetName() const;
        void SetPrice(int price);
        int GetPrice() const;
        void SetQuantity(int quantity);
        int GetQuantity() const;
        void SetDescription(string description);
        void PrintItemCost() const;
        void PrintItemDescription() const;
   private:
        string itemName;
        string itemDescription;
        int itemPrice;
        int itemQuantity;
};

#endif