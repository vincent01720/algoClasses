#ifndef QITEM_H
#define QITEM_H

class QItem {
public:
   /**********************************************************************
    * MODIFY THIS CLASS AS YOU SEE FIT--MY SOLUTION USED THE DATA MEMBERS
    *   SHOWN BELOW AND HAD FUNCTIONS THAT ALLOWED ME TO MODIFY AND READ
    *   THEM AS NEEDED, BUT YOU MAY COME UP WITH SOMETHING DIFFERENT
    * ********************************************************************/
    QItem():cNum(0), arrTime(0), svcTime(0) {}
    QItem(unsigned costumerNumber, unsigned arrivalTime, unsigned serviceTime){
             cNum = costumerNumber;
             arrTime = arrivalTime;
             svcTime = serviceTime;
        }
    void SetcNum(unsigned cNum);
    unsigned GetcNum() const;
    void SetarrTime(unsigned arrTime);
    unsigned GetarrTime() const;
    void SetsvcTime(unsigned svcTime);
    unsigned GetsvcTime() const;

private:
	unsigned cNum;		// Customer number
	unsigned arrTime;	// Arrival time
	unsigned svcTime;	// Time required to service customer
};

#endif