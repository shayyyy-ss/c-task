#pragma once
#include "Date.h"
#ifndef TRIP_H
#define TRIP_H
// ostream constructor
#include <iostream>     // std::cout, std::ostream, std::ios

using namespace std;
class Trip
{
	int num;
	char* des;//3 letters 
	Date d;
	static int counter;

public:

	int GetNum() { return num; }
	char* GetDes() { return des; }
	Date GetDate() { return d; }

	void SetDes(char* nDes);
	void SetDate(Date nDate);

	Trip(char* Ndes, Date Nd);
	Trip();
	Trip(const Trip& t);

	friend std::ostream& operator<<(std::ostream& out, const Trip& t);

};
#endif

