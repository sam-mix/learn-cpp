//// stock10.cpp -- Stock class with constructors, destuctor added
//#include <iostream>
//#include "stock10.h"
//using namespace std;
//
//// constructors (verbose version)
//Stock::Stock() { // default constructor
//	cout << "Default constructor called" << endl;
//	company = "no name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//
//Stock::Stock(const string & co, long n, double pr) {
//	cout << "Constructor using " << co << " called" << endl;
//	company = co;
//	if (n < 0) {
//		cout << "Number of shares can't be negative; "
//			<< company << " shares set to 0." << endl;
//		shares = 0;
//	} else {
//		shares = n;
//	}
//	share_val = pr;
//	set_tot();
//}
//
//// class destructor
//Stock::~Stock() {
//	cout << "Bye, " << company << "!" << endl;
//}
//
//// other methods
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		cout << "Number of shares can't be negative."
//			<< "Transaction is aborted." << endl;
//	} else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	if (num < 0) {
//		cout << "Number of shares can't be negative."
//			<< "Transaction is aborted." << endl;
//	} else if (num > shares) {
//		cout << "You cant't sell more than you have! "
//			<< "Transaction is aborted." << endl;
//	} else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() {
//	// set format to #.###
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	streamsize prec = cout.precision(3);
//	cout << "Company: " << company << " Shares: " << shares << endl;
//	cout << "	Share Price: $" << share_val;
//	// set format to #.##
//	cout.precision(2);
//	cout << "	Total Worth: $" << total_val << endl;
//	
//	// resstore original format
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
//
