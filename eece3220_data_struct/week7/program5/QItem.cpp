/*************************************************
 * FILE TO HOLD DEFINITIONS FOR QItem FUNCTIONS
 * ***********************************************/
#include<iostream>
using namespace std;
#include "QItem.h"

void QItem::SetcNum(unsigned customerNumber){cNum = customerNumber;};
unsigned QItem::GetcNum() const{return cNum;};

void QItem::SetarrTime(unsigned arrivalTime){arrTime = arrivalTime;};
unsigned QItem::GetarrTime() const{return arrTime;};

void QItem::SetsvcTime(unsigned serviceTime){svcTime = serviceTime;};
unsigned QItem::GetsvcTime() const{return svcTime;};
