#pragma once
#include "Date.h"
#ifndef TRIP_H
#define TRIP_H


class Trip
{
	int num;
	char* des;//3 letters 
	Date d;

public:

	int GetNum() { return num; }
	char* GetDes() { return des; }
	Date GetDate() { return d; }

	void SetNum(int nNum);
	void SetDes(char* nDes);
	void SetDate(Date nDate);

	Trip(int Nnum, char* Ndes, Date Nd);
	Trip();

	void PrintTrip();

};

#endif 