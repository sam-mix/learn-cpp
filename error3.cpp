//// error3.cpp -- using an exception
//#include <iostream>
//
//double hmean(double a, double b);
//
//int main() {
//
//	double x, y, z;
//	using std::cout; 
//	using std::cin; 
//	using  std::endl;
//	cout << "Enter two numbers: ";
//	while (cin >> x >> y) {
//		try { // start of try block
//			z = hmean(x, y);
//		} // end of try block 
//		catch (const char* s) // start of exception handler 
//		{
//			cout << s << endl;
//			cout << "Enter a raw pair of numbers: ";
//			continue;
//		}
//		cout << "Narmonic mean of " << x << " and " << y << " is " << z << endl;
//		cout << "Enter next set of numbers <q to quit>: ";
//	}
//	cout << "Bye!" << endl;
//	return 0;
//}
//
//
//double hmean(double a, double b) {
//	if (a == -b) {
//		throw "bad hmean() arguments: a = -b not allowed";
//	}
//	return 2.0 * a * b / (a + b);
//}
