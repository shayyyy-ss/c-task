
#include <iostream>

#include "ManagementTrips.h"
using namespace std;

void deleteTrips(ManagementTrips* mts);
void AddTrip(ManagementTrips* mts);

int main() {
	ManagementTrips mts = ManagementTrips();
	int option;
	do {
		cout << "select an option: \n1.Print Trips \n2.Delete Trips\n3.Add Trip\n4.Exit" << endl;
		cin >> option;
		switch (option) {
		case 1:
			cout << mts;
			break;
		case 2:
			deleteTrips(&mts);
			break;
		case 3:
			AddTrip(&mts);
			break;
		case 4:
			cout << "bye" << endl;
			break;
		default:
			cout << "invalid option" << endl;
		}
	} while (option != 4);

}

void deleteTrips(ManagementTrips* mts) {
	int day, month, year;
	cout << "enter day" << endl;
	cin >> day;
	cout << "enter month" << endl;
	cin >> month;
	cout << "enter year" << endl;
	cin >> year;
	Date d = Date(day, month, year);
	char a[] = "jkf";
	Trip *t = new Trip(a, d);
	mts->operator-=(*t);
}

void AddTrip(ManagementTrips* mts) {
	int day, month, year;
	cout << "enter day" << endl;
	cin >> day;
	cout << "enter month" << endl;
	cin >> month;
	cout << "enter year" << endl;
	cin >> year;
	Date d = Date(day, month, year);
	char* a = new char[3];
	cout << "enter 3 letters des" << endl;
	cin >> a;
	Trip* t = new Trip(a, d);
	mts->operator+=(*t);

}

