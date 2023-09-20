// Date.h: interface for the Date class.
//
//////////////////////////////////////////////////////////////////////

#ifndef DATE_H

#define DATE_H

#include <string>
#include <iostream>
using namespace std;

class Date  {

friend ostream & operator<<(ostream &, const Date &);
friend bool operator<(const Date &, const Date &);

private:
	int dd, mm, aa;

public:
	Date();
	Date(int, int, int);
	string toString() const;
	int toNumber() const;
	bool operator<(const Date &);
	long getDias() const;
	virtual ~Date();
};

#endif 
