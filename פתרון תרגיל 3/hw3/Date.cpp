#include "Date.h"
#include <iostream>


using namespace std;

void Date::SetDay(int nDay) {
	if (nDay > 0 && nDay < 31) { day = nDay; }
	else { day = 0; }
}

void Date::SetMonth(int nMonth) {
	if (nMonth > 0 && nMonth < 13) { month = nMonth; }
	else { month = 0; }
}

void Date::SetYear(int nYear) {
	year = nYear;
}

Date::Date(int day, int month, int year) {
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}

Date::Date() : day(1), month(1), year(2020) {
}

std::ostream& operator<<(std::ostream& out, const Date& d) {
	out << d.day << "/" << d.month << "/" << d.year << endl;
	return out;
}


bool Date::operator>(const Date&d) const {
	if (d.year > year) { return true; }
	else if (d.day < year) { return false; }
	if (d.month > month) { return true; }
	if (d.month < month) { return false; }
	if (d.day > day) { return true; }
	return false;
}


bool Date::operator<(const Date& d)const {
	if (d.year > year) { return false; }
	else if (d.year < year) { return true; }
	if (d.month > month) { return false; }
	if (d.month < month) { return true; }
	if (d.day > day) { return false; }
	return true;
}

bool Date::operator==(const Date& d)const {
	if (d.year == year && d.month == month && d.day == day) { return true; }
	return false;
}