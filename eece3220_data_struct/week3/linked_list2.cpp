#include <iostream>
using namespace std;

class IntNode {
   public:
      IntNode(int value = -1, IntNode* nextLoc = nullptr);
      void InsertAfter(IntNode* nodeLoc);
      int GetValue();
      IntNode* GetNext();
      void PrintData();
   private:
      int value;
      IntNode* nextIntNodePtr;
};

IntNode::IntNode(int val, IntNode* nextLoc) {
   this->value = val;
   this->nextIntNodePtr = nextLoc;
}

void IntNode::InsertAfter(IntNode* nodeLoc) {
   IntNode* tmpNext = nullptr;

   tmpNext = this->nextIntNodePtr;
   this->nextIntNodePtr = nodeLoc;
   nodeLoc->nextIntNodePtr = tmpNext;
}

int IntNode::GetValue() {
   return this->value;
}

IntNode* IntNode::GetNext() {
   return this->nextIntNodePtr;
}

void IntNode::PrintData() {
   cout << this->value << endl;
}

int main() {
   IntNode* headObj = nullptr;
   IntNode* node1 = nullptr;
   IntNode* node2 = nullptr;
   IntNode* node3 = nullptr;
   IntNode* node4 = nullptr;
   IntNode* currObj = nullptr;

   headObj = new IntNode(-1);

   node1 = new IntNode(10);
   headObj->InsertAfter(node1);

   node2 = new IntNode(11);
   node1->InsertAfter(node2);

   node3 = new IntNode(30);
   node2->InsertAfter(node3);

   node4 = new IntNode(35);
   node3->InsertAfter(node4);

   currObj = headObj;

   while (currObj != nullptr) {
      if (currObj->GetValue() < 40) {
         currObj->PrintData();
      }
      currObj = currObj->GetNext();
   }

   return 0;
}