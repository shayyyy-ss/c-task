#include "ManagementTrips.h"
#include "Date.h"
#include "Trip.h"
#include <iostream>
#include <fstream>
using namespace std;

ManagementTrips::ManagementTrips() {
	index = 0;
	arrTrips = new Trip * [0];
}

ManagementTrips::ManagementTrips(const ManagementTrips& m) {
	index = m.index;
	arrTrips = new Trip * [index];
	for (int i = 0; i < index; i++) {
		arrTrips[i] = new Trip(*(m.arrTrips[i]));
	}
}

void ManagementTrips::operator+=(Trip& t) {
	Trip** tempPtr = new Trip * [index + 1];
	for (int i = 0; i < index; i++) {
		tempPtr[i] = arrTrips[i];
	}
	tempPtr[index] = &t; 
	index++;

	delete[]arrTrips;
	arrTrips = tempPtr;

}

void ManagementTrips::operator-=(Trip& t) {
	int countDelete = 0;
	for (int i = 0; i < index; i++) {
		if (arrTrips[i]->GetDate().operator==(t.GetDate())) {
			countDelete++;
		}
	}
	//index-count is the new size
	if (countDelete > 0) {
		int indexTemp = 0;
		Trip** temp = new Trip * [index - countDelete];
		for (int i = 0; i < index; i++) {
			if (!arrTrips[i]->GetDate().operator==(t.GetDate())) {
				temp[indexTemp] = arrTrips[i];
				indexTemp++;
			}
		}
		index = indexTemp;

		delete[]arrTrips;
		arrTrips = temp;
	}
}

std::ostream& operator<<(std::ostream& out, const ManagementTrips& m) {
	if (m.index == 0) {
		out << "no trips" << endl;
		return out;
	}
	for (int i = 0; i < m.index; i++) {
		out << m.arrTrips[i] << endl;
	}
	return out;

}

ManagementTrips::~ManagementTrips() {
	for (int i = 0; i < index; i++) {
		delete arrTrips[i]; // Release memory for each Trip object
	}
	delete[] arrTrips; // Release memory for the array of Trip pointers
}
