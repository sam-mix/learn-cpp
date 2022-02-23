//// error2.cpp -- returning an error code 
//
//#include <iostream>
//#include <cfloat> // (or float.h) for DBL_MAX
//
//bool hmean(double a, double b, double* ans);
//
//int main() {
//
//	double x, y, z;
//	using std::cout;
//	using std::endl;
//	using std::cin;
//	cout << "Enter two number: ";
//	while (cin >> x >> y) {
//		if (hmean(x, y, &z)) {
//			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
//		} else {
//			cout << "One value shoule not be the negative of the other - try again." << endl;
//		}
//		cout << "Enter next set of numbers (q to quit)" << endl;
//	}
//	cout << "Bye!" << endl;
//	return 0;
//}
//
//bool hmean(double a, double b, double* c) {
//	if (a == -b) {
//		return false;
//	}
//	*c = 2.0 * a * b / (a + b);
//	return true;
//}
//
//
//
//
