// Date.cpp: implementation of the Date class.
//
//////////////////////////////////////////////////////////////////////

#include "Date.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>

using namespace std;

Date::Date(){
	this->dd = this->mm = this->aa = 0;
}

Date::Date(int d, int m, int a) {
	this->dd = d;
	this->mm = m;
	this->aa = a;
}


long Date::getDias() const
{
	return this->aa*365 + this->dd + (this->mm-1) * 30;
}

int Date::toNumber() const {
	char s[50];
	
	sprintf(s, "%d%02d%02d", this->aa, this->mm, this->dd);
	return stoi(string(s));
}
	
bool operator<(const Date &d1, const Date &d2){
	return d1.toNumber() < d2.toNumber();
}

ostream & operator<<(ostream &os, const Date &d)
{
	return os << setw(2) << setfill('0') << d.dd << "/" <<
				 setw(2) << setfill('0') << d.mm << "/" <<
				 setw(2) << setfill('0') << d.aa;
}

string Date::toString() const {
	char s[50];
	string fecha;

	sprintf(s, "%02d/%02d/%04d", dd, mm, aa);
	fecha = s;
	return fecha;
}


Date::~Date(){}
