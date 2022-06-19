/*
 * EECE.3220: Data Structures
 * Instructor: M. Geiger
 *
 * Time.cpp: Time function definitions
 * Includes blank definitions for overloaded operators to be written for Program 3
 */
#include<iostream>
#include "Time.h"	   // Necessary for Time class definition; implicitly includes <iostream>
#include <iomanip>	// Necessary for setw(), setfill()
using std::setw;
using std::setfill;
using namespace std;

/*** OVERLOADED OPERATORS TO BE ADDED FOR PROGRAM 3 ***/
/*** PREVIOUSLY DEFINED FUNCTIONS START ON LINE 145 (BEFORE YOU START ADDING CODE) ***/
/*** UPDATED 10/11 TO FIX PARAMETERIZED CONSTRUCTOR, advance() ***/

// Output operator
ostream& operator <<(ostream& out, const Time& rhs) {

	/*************************************************
	* Print time using form:
	*    h:mm _M  or hh:mm _M
	* where:
	*    h or hh	= # of hours (1 or 2 digits)
	*    mm			= # of minutes (always 2 digits)
	*    _M			= AM or PM
	**************************************************/

	return out << rhs.hours << ":" << rhs.minutes << rhs.AMorPM;
}

// Input operator
istream& operator >>(istream& in, Time& rhs) {

	/*************************************************
	* Read time assuming it is written in form:
	*    h:mm _M  or hh:mm _M
	* where:
	*    h or hh	= # of hours (1 or 2 digits)
	*    mm			= # of minutes (always 2 digits)
	*    _M			= AM or PM
	**************************************************/
    char ch1;
    in>>rhs.hours>>ch1>>rhs.minutes>>rhs.AMorPM;
/*     while(rhs.hours<-1 || rhs.hours>24 || rhs.minutes<-1 || rhs.minutes>60 || rhs.AMorPM != 'A' || rhs.AMorPM != 'P' || ch1 != ':'){
        cout << "enter again" << endl;
        in>>rhs.hours>>ch1>>rhs.minutes>>rhs.AMorPM;
        cout << rhs.hours;
    } */
    return in;
}

// Comparison operators
bool Time::operator ==(const Time& rhs) {

	/********************************************
	* Returns true if calling object matches rhs,
	*   false otherwise
	*********************************************/
    //if(*this == rhs) return true;
    if (*this<rhs || *this>rhs || AMorPM !=rhs.AMorPM) return false;
    return true;
	//return false;
}

bool Time::operator !=(const Time& rhs) {

	/**************************************************
	* Returns true if calling object doesn't match rhs,
	*   false otherwise
	***************************************************/
    if(*this > rhs || *this<rhs) return true;
	return false;
}

bool Time::operator <(const Time& rhs) {

	/**********************************************
	* Returns true if calling object is less 
	*   (earlier in day) than rhs, false otherwise
	***********************************************/
    if (hours<rhs.hours) return true;
    if (hours>rhs.hours) return false;
    if (minutes<rhs.minutes) return true;
    if (minutes>rhs.minutes) return false;
    return false;
}

bool Time::operator >(const Time& rhs) {

	/********************************************
	* Returns true if calling object is greater
	*   (later in day) than rhs, false otherwise
	*********************************************/
    if (hours>rhs.hours) return true;
    if (hours<rhs.hours) return false;
    if (minutes>rhs.minutes) return true;
    if (minutes<rhs.minutes) return false;
    return false;
}

// Arithmetic operators
Time Time::operator +(const Time& rhs) {
	Time sum;
    sum.hours = hours + rhs.hours;
    sum.minutes = minutes + rhs.minutes;
    if(sum.minutes>59){
        sum.minutes -= 60;
        sum.hours++;
    }
    if(sum.hours>12){
        sum.AMorPM = 'P';
    }else{
        sum.AMorPM = 'A';
    }
    while (sum.hours>11) sum.hours-=12;
	/********************************************
	* Add two Time objects and return sum
	*   See examples in spec
	*********************************************/
	return sum;
}


Time Time::operator -(const Time& rhs) {
	Time diff;
    // minutes, hours are unsigned [0, ++]
    int m, h;
    m = minutes - rhs.minutes;
    h = hours - rhs.hours;
    if (m<0)
    {
        m += 60;
        h--;
    }
    while (h<0) h+=12;

    diff.minutes = m;
    diff.hours = h;
	return diff;
}

Time& Time::operator +=(const Time& rhs) {

	/**************************************************
	* Same as + operator, but modifies calling object
	*   and returns reference to calling object
	***************************************************/
    *this=*this+rhs;
    return *this;
}

Time& Time::operator -=(const Time& rhs) {

	/**************************************************
	* Same as - operator, but modifies calling object
	*   and returns reference to calling object
	***************************************************/
    *this=*this+rhs;
    return *this; //vincent
}

// Increment operators--adds 1 minute to current time
Time& Time::operator++() {
	/*************************
	* Pre-increment operator
	**************************/
    minutes = minutes + 1;
    if(minutes>59){
        minutes -= 60;
        hours++;
        if(hours == 12){
            if(AMorPM=='A') AMorPM = 'P';
            else AMorPM = 'A';
        }
    }
    return *this;
}

Time Time::operator++(int) {
	/*************************
	* Post-increment operator
	**************************/
    Time temp = *this;
    ++*this;
    return temp;

}
/*** END OVERLOADED OPERATORS TO BE ADDED FOR PROGRAM 3 ***/
/*** DO NOT MODIFY CODE BELOW THIS LINE ***/
// Default constructor
Time::Time() : hours(0), minutes(0), miltime(0), AMorPM('A') 
{}

// Parameterized constructor
Time::Time(unsigned h, unsigned m, char AP) : hours(h), minutes(m), AMorPM(AP) {
	miltime = 100 * h + m;

	/*** FIXED 10/11: ORIGINAL VERSION DID NOT CORRECTLY HANDLE 12 AM OR 12 PM ***/
	if (AP == 'P' && h != 12)
		miltime += 1200;
	else if (AP == 'A' && h == 12)
		miltime -= 1200;
}

// Set time data members
void Time::set(unsigned h, unsigned m, char AP) {
	hours = h;
	minutes = m;
	AMorPM = AP;
	miltime = 100 * h + m;
	if (AP == 'P')
		miltime += 1200;
}

// Print time to desired output stream
void Time::display(ostream& out) {
	out << hours << ':'
		<< setw(2) << setfill('0') << minutes		// setw(2) forces minutes to be printed with 2 chars
		<< ' ' << AMorPM << 'M';					// setfill('0') adds leading 0 to minutes if needed
}

// Advance time by h hours, m minutes
// Use modulo arithmetic to ensure 
//   1 <= hours <= 12, 0 <= minutes <= 59
/*** FIXED 10/11: ORIGINAL VERSION DIDN'T WORK FOR ALL CASES AND WAS FAR TOO CONVOLUTED ***/
/***  NEW VERSION DOES ALL MATH ON MILTIME AND THEN CORRECTS HOURS, MINUTES ***/
void Time::advance(unsigned h, unsigned m) {

	unsigned tempMT = h * 100 + m;		// Temporary miltime representing amount
									         	//   of time to advance by, since math
										         //   is much easier using miltime!

	// If sum of minutes >= 60, need to account for extra hour added
	if (minutes + m >= 60)
		miltime = (miltime + tempMT + 40) % 2400;	// % 2400 ensures time between 0 & 2359
													         //   (since minutes adjustment guarantees
													         //    last two digits < 60)
	else
		miltime = (miltime + tempMT) % 2400;

	// Convert back from miltime to new hours/minutes
	hours = miltime / 100;

	// Special case 1: time in PM (other than 12 PM)
	if (hours > 12)
		hours -= 12;

	// Special case 2: 12:xx AM --> miltime / 100 = 0
	else if (hours == 0)
		hours = 12;

	minutes = miltime % 100;

	// Figure out if new time is in AM or PM
	AMorPM = (miltime < 1200 ? 'A' : 'P');
}

// Returns true if calling object is less than argument
bool Time::lessThan(const Time& rhs) {
	if (miltime < rhs.miltime)
		return true;
	else 
		return false;
}