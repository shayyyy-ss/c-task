#include "Trip.h"
#include <iostream>
using namespace std;
#include "Date.h"
#include <cstring>

void Trip::SetDate(Date nD) {
	d = Date(nD.GetDay(), nD.GetMonth(), nD.GetYear());
}

void Trip::SetNum(int nNum) {
	if (nNum > 0) { num = nNum; }
	else { nNum = -1; }
}

void Trip::SetDes(char* Ndes) {
	des = Ndes;
}

Trip::Trip(int num, char* des, Date d) {
	SetDate(d);
	SetDes(des);
	SetNum(num);
}

Trip::Trip() {
	num = 1;
	char a[] = "jkf";
	des = a;
	d = Date(18, 10, 2004);
}

void Trip::PrintTrip() {
	cout << num << "~" << des << "~" << endl;
	d.PrintDate();
}