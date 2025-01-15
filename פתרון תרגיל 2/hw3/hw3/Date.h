#pragma once
#ifndef DATE_H
#define DATE_H


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

	void PrintDate();
};
#endif 

