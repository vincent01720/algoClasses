#include <iostream>
#include <string>

using namespace std;


// ***** Add your Date class definition and driver program at the end of
// this file (at about line 115). *****

// The Month class provided below is a "helper" class for your Date class.
// Note that although both classes are defined in this single compilation
// unit (file), we are not nesting the Month class in the Date class or
// vice versa.

class Month {
	friend class Date;
	
	friend ostream& operator<< (ostream&, const Month);
	
    private:
        enum EMonth { Jan=1, Feb, Mar, Apr, May, Jun,
					  Jul, Aug, Sep, Oct, Nov, Dec };
        
        // default constructor
        Month() : _month(Jan) {}
        
        // value constructor
        Month(const int im) : _month( static_cast<EMonth>(im) ) {}
        
        // mutator functions
        void setMonth(const string m) { _month = StringToEMonth(m); }
		void setMonth(const int im) { _month = static_cast<EMonth>(im); }
		
		// Private helper member functions
        EMonth StringToEMonth(const string) const;
        int MonthToInt() const { return static_cast<int>(_month); }
		string MonthToString() const;
		string MonthToString2() const;

		// Private data member
	    EMonth _month;
};

// Definitions of helper member functions for class Month

Month::EMonth Month::StringToEMonth(const string m) const {
	if (m == "Jan") return Jan;
	else if (m == "Feb") return Feb;
	else if (m == "Mar") return Mar;
	else if (m == "Apr") return Apr;
	else if (m == "May") return May;
	else if (m == "Jun") return Jun;
	else if (m == "Jul") return Jul;
	else if (m == "Aug") return Aug;
	else if (m == "Sep") return Sep;
	else if (m == "Oct") return Oct;
	else if (m == "Nov") return Nov;
	else if (m == "Dec") return Dec;
	else {
		cerr << "Month::StringToMonth: Invalid input month \"" << m << "\"\n";
		exit(1);
	}
}

string Month::MonthToString() const {
	switch (_month) {
		case Jan: return "Jan";
		case Feb: return "Feb";
		case Mar: return "Mar";
		case Apr: return "Apr";
		case May: return "May";
		case Jun: return "Jun";
		case Jul: return "Jul";
		case Aug: return "Aug";
		case Sep: return "Sep";
		case Oct: return "Oct";
		case Nov: return "Nov";
		case Dec: return "Dec";
		default:
			cerr << "MonthToString: invalid input month \'" << _month
				 << "\'\n";
			exit(1);
	}
}

string Month::MonthToString2() const {
	switch (_month) {
		case Jan: return "January";
		case Feb: return "February";
		case Mar: return "March";
		case Apr: return "April";
		case May: return "May";
		case Jun: return "June";
		case Jul: return "July";
		case Aug: return "August";
		case Sep: return "September";
		case Oct: return "October";
		case Nov: return "November";
		case Dec: return "December";
		default:
			cerr << "MonthToString: invalid input month \'" << _month << "\'\n";
			exit(1);
	}
}

// Definition of friend function operator<<

ostream& operator<< (ostream& out, const Month m) {
	out << m.MonthToString2();
	return out;
}


// ***** Add your Date class definition and driver program below. *****
class Date{
    int dd, yy;
    string mm;
    public:
        friend class Month;
        friend ostream& operator<< (ostream&, const Month);
        Date(int day = 1, string month = "January", int year = 2022);
};

void Date::outputDateAsInt(ostream&)
void Date::outputDateAsString(ostream&)
void Date::setMonth(string mm)
ostream& operator<< (ostream& out){
    return out;
}
void Date::operator++ (){
    ++yy.Date();
}