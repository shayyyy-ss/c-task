#include "Trip.h"
#include <iostream>
using namespace std;
#include "Date.h"
#include <cstring>

using namespace std;

int Trip::counter = 1;

void Trip::SetDate(Date nD) {
	d = Date(nD.GetDay(), nD.GetMonth(), nD.GetYear());
}


void Trip::SetDes(char* Ndes) {
	des = Ndes;
}

Trip::Trip(char* des, Date d) {
	SetDate(d);
	SetDes(des);
	num = counter;
	counter++;
}

Trip::Trip() {
	num = counter;
	char a[] = "jkf";
	des = a;
	d = Date(18, 10, 2004);
	counter++;
}

std::ostream& operator<<(std::ostream& out, const Trip& t) {
	out<< "Trip Number: " << t.num << " destination: " << t.des << endl;
	out << t.d << endl;
	return out;
	
}

Trip::Trip(const Trip&t) {
	d = t.d;
	des = t.des;
	num = counter;
	counter++;
}
