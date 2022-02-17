//// usestok2.cpp -- using the Stock class
//// compile with stock20.cpp
//#include <iostream>
//#include "stock20.h"
//
//using namespace std;
//
//const int STKS = 4;
//int main() {
//	// create an array of initailized objects
//	Stock stocks[STKS] = {
//		Stock("One", 12, 20.0)
//		,Stock("Two", 200, 2.0)
//		,Stock("Three", 130, 3.25)
//		,Stock("Four", 60, 6.5)
//	};
//
//	cout << "Stock holdings:" << endl;
//	int st;
//	for (st = 0; st < STKS; st++) {
//		stocks[st].show();
//	}
//	// set pointer to first element 
//	const Stock* top = &stocks[0];
//
//	for (st = 1; st < STKS; st++) {
//		top = &top->topvale(stocks[st]);
//	}
//
//	// now top points to the most valuable holding
//	cout << endl << "Most valuable holding:" << endl;
//	top->show();
//
//	return 0;
//}
//
//
//
//
//
