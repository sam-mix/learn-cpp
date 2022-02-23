//// error1.cpp -- using the abort() function
//
//#include <iostream>
//#include <cstdlib>
//
//double hmean(double a, double b);
//
//
//int main() {
//	using std::cout;
//	using std::endl;
//	using std::cin;
//
//	double x, y, z;
//
//	while (cin >> x >> y) {
//		z = hmean(x,y);
//		cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
//		cout << "Enter next set of numbers <q rto quit>: ";
//	}
//	cout << "Bye!" << endl;
//	
//
//	return 0;
//}
//
//double hmean(double a, double b) {
//	if (a == -b) {
//		std::cout << "untemable arguments to hmean()" << std::endl;
//		std::abort();
//	}
//	return 2.0 * a * b / (a + b);
//}