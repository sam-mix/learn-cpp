// mytime3.cpp -- implementing Time methods
#include "mytime3.h"

Time::Time() {
	hours = minutes = 0;
}

Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}

void Time::Addmin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h) { hours += h; }

void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time& t) const {
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time& t) const {
	Time diff;
	int d = minutes < t.minutes? 1: 0; // ½øÎ»
	diff.hours = hours - t.hours - d;
	diff.minutes = minutes + d * 60 - t.minutes;
	return diff;
}

Time Time::operator*(double n) const {
	Time r;
	long totalMinutes = (hours * 60 + minutes) * n;
	r.hours = totalMinutes / 60;
	r.minutes = totalMinutes % 60;
	return r;
}

ostream& operator<<(ostream & os, const Time & t) {
	os << t.hours << " hours, " << t.minutes << " minutes.";
	return os;
}
