#include <iostream>
#include <string>
#include <cctype>

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
	enum EMonth {
		Jan = 1, Feb, Mar, Apr, May, Jun,
		Jul, Aug, Sep, Oct, Nov, Dec
	};

	// default constructor
	Month() : _month(Jan) {}

	// value constructor
	Month(const int im) : _month(static_cast<EMonth>(im)) {}

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
class Date {
public: 
	friend class Month;
	Date() : _month(1), _day(1), _year(2022) {}
	Date(int month) : _month(month), _day(1), _year(2022) {}
	Date(string);

	void outputDateAsInt(ostream& out);
	void outputDateAsString(ostream& out);
	
	friend ostream& operator<< (ostream&, const Date&);

	void operator++ (void);

private:
	Month _month;
	int _day;
	int _year;
};

Date::Date(string month) {
	_month = _month.StringToEMonth(month);
	_day = 1;
	_year = 2022;
}

void Date::outputDateAsInt(ostream& out) {
	out << _month.MonthToInt() << "/" << _day << "/" << _year;
}

void Date::outputDateAsString(ostream& out) {
	out << _month.MonthToString() << " " << _day << ", " << _year;
}

ostream& operator<< (ostream& out, const Date& D) {
	return (out << D._month << " " << D._day << ", " << D._year);
}

void Date::operator++ (void) {
	_year++;
}

int main(int argc, char* argv[])
{
	Date D;
	Date D2(2);
	Date D3("Dec");
	D.outputDateAsString(cout);
	cout << endl;
	D.outputDateAsInt(cout);
	cout << endl;
	cout << D;
	cout << endl;
	D2.outputDateAsString(cout);
	cout << endl;
	D2.outputDateAsInt(cout);
	cout << endl;
	cout << D2;
	cout << endl;
	D3.outputDateAsString(cout);
	cout << endl;
	D3.outputDateAsInt(cout);
	cout << endl;
	cout << D3;
	cout << endl;
	++D3;
	D3.outputDateAsString(cout);
	cout << endl;
	D3.outputDateAsInt(cout);
	cout << endl;
	cout << D3;
	cout << endl;

	return 0;
}