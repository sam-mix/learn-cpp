// stock20.cpp -- augmented version

#include <iostream>
#include "stock20.h"

using namespace std;

// constructors
Stock::Stock() {
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const string & co, long n, double pr) {
	company = co;
	if (n < 0) {
		shares = 0;
	} else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

// class destructor
Stock::~Stock() {} // quiet class destructor

// other methods
void Stock::buy(long num, double price) {
	if (num < 0) {
		cout << "num negative aborted." << endl;
	} else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price) {
	if (num < 0) {
		cout << "num negative aborted." << endl;
	}
	else if (num > shares) {
		cout << "���ۣ� ��ֹ��" << endl;
	} else {
		shares -= num;
		share_val = price;
		set_tot();
	}

}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

void Stock::show() const{
	// set format to #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares
		<< " Share Price: $" << share_val;
	// set format to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << endl;

	// restore original format
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

const Stock& Stock::topvale(const Stock & s) const{
	if (s.total_val > total_val) { return s; }
	return *this;
}
