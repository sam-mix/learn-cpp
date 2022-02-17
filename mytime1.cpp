//// mytime1.cpp -- implementing Time methods
//
//#include <iostream>
//#include "mytime1.h"
//
//
//Time::Time() {
//	hours = 0;
//	minutes = 0;
//}
//
//Time::Time(int h, int m) {
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddHr(int h) {
//	hours += h;
//}
//
//void Time::AddMin(int m) {
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//Time Time::operator+(const Time & t) const {
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours + sum.minutes / 60;
//	sum.minutes %= 60;
//	return sum;
//}
//
//void Time::Show() const {
//	using namespace std;
//	cout << hours << " hours, " << minutes << " minutes." << endl;
//}
