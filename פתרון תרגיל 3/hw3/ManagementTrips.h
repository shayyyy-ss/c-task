#pragma once
#include "Date.h"
#include "Trip.h"
#include <iostream>

using namespace std;
#ifndef MANAGEMENTTRIPS_H
#define MANAGEMENTTRIPS_H
class ManagementTrips
{
	Trip** arrTrips;
	int index;

public:
	ManagementTrips();
	ManagementTrips(const ManagementTrips& m);
	~ManagementTrips();


	void operator+=(Trip& t);
	void operator-=(Trip& t);

	friend std::ostream& operator<<(std::ostream& out, const ManagementTrips& m);
};
#endif

