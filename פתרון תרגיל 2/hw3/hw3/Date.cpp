#include "Date.h"
#include <iostream>
using namespace std;

void Date::SetDay(int nDay) {
	if (nDay > 0 && nDay < 31) { day = nDay; }
	else { day = 0; }
}

void Date::SetMonth(int nMonth) {
	if (nMonth > 0 && nMonth< 13) { month = nMonth; }
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

Date::Date() {
	Date(1, 1, 2020);
}

void Date::PrintDate() {
	cout << day << "/" << month << "/" << year << endl;
}