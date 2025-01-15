#pragma once
#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;
class Date
{
	int day;
	int month;
	int year;

public:
	int GetDay() { return day; }
	int GetMonth() { return month; }
	int GetYear() { return year; }

	void SetDay(int nDay);
	void SetMonth(int nMonth);
	void SetYear(int nYear);

	Date(int Nday, int Nmonth, int Nyear);

	Date();
  friend std::ostream& operator<<(std::ostream& out, const Date& d);
   

  bool operator>(const Date& d) const;
	bool operator<(const Date& d) const;
	  bool operator==(const Date& d) const;
};
#endif

