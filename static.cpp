//// static.cpp -- using a static local variable
//#include <iostream>
//
//// constants
//const int ArSize = 10;
//
//// function prototype
//void strcount(const char*str);
//
//int main() {
//	using namespace std;
//	char input[ArSize];
//	char next;
//	cout << "Enter a line:" << endl;
//	cin.get(input, ArSize);
//	
//	while (cin) {
//		cin.get(next);
//		while (next != '\n') {
//			cin.get(next);
//		}
//		strcount(input);
//		cout << "Enter next line (empty line to quit):" << endl;
//
//		cin.get(input, ArSize);
//	}
//
//	cout << "Bye" << endl;
//
//	return 0;
//}
//
//void strcount(const char* str) {
//
//	using namespace std;
//	static int total = 0; // static local variable
//	int count = 0; // automatic local variable
//
//	cout << "\"" << str << "\" contains ";
//	while (*str++) {
//		count++;
//	}
//	total += count;
//	cout << count << " characters" << endl;
//	cout << total << " characters total" << endl;
//}
//
