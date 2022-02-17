//// sqrt.cpp -- using the sqrt() function
//
//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main() {
//
//	double area;
//
//	cout << "Enter the floor area, in square feet, of your home: ";
//	cin >> area;
//
//	double side;
//	side = sqrt(area);
//
//	cout << "That's the quivalent of a square " << side;
//	cout << " feet to the side." << endl;
//	cout << "How fascinating" << endl;
//
//
//	return 0;
//}
//

//#include <iostream>
//using namespace std;
//
//struct inflatable {
//	char name[20];
//	float volume;
//	double price;
//};
//
//int main() {
//	inflatable* ps = new inflatable;
//
//	cout << "Enter name of inflatable item: ";
//	cin.get(ps->name, 20);
//	cout << "Enter volume in cubic feet: ";
//	cin >> (*ps).volume;
//	cout << "Enter price: $";
//	cin >> ps->price;
//
//	cout << "Name: " << (*ps).name << endl;
//	cout << "Volume: " << ps->volume << " cubic feet\n";
//	cout << "Price: $" << ps->price << endl;
//	delete ps;
//	return 0;
//}



//#include <iostream>
//#include <cstring>
//
//using namespace std; // or string.h
//
//char* getname(void); // function prototype
//
////严重性	代码	说明	项目	文件	行	禁止显示状态
////错误	C4996	'strcpy': This function or variable may be unsafe.Consider using strcpy_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.See online help for details.learn - cpp	D : \dev\ws_github\learn - cpp\sqrt.cpp	82
//#pragma warning(disable:4996)
//int main() {
//
//	char* name; // create pointer but no storage
//	name = getname(); // assign address of string to name 
//
//	cout << name << " at " << (int*)name << "\n";
//	delete[] name;
//
//	name = getname(); // reuse freed memory
//	cout << name << " at " << (int*)name << "\n";
//	delete[] name; // memory freed again
//	return 0;
//}
//
//char* getname() { // return pointer to new string 
//	char temp[80]; // temporary storage
//	cout << "Enter last name: ";
//	cin >> temp;
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp); // copy string into smaller space
//
//	return pn; // temp lost when function ends 
//}

//// mixtypes.cpp -- some type combinations 
//#include <iostream>
//
//struct antarctica_years_end {
//	int year;
//	/* some really interestring data, etc. */
//};
//
//int main() {
//	antarctica_years_end s01, s02, s03;
//	s01.year = 1998;
//	antarctica_years_end* pa = &s02;
//	pa->year = 1999;
//	antarctica_years_end trio[3]; // array of 3 structures
//	trio[0].year = 2003;
//	std::cout << trio->year << std::endl;
//	const antarctica_years_end* arp[3] = {&s01, &s02, &s03};
//	std::cout << arp[1]->year << std::endl;
//	const antarctica_years_end** ppa = arp;
//	auto ppb = arp; // c++ 11 automatic type deduction 
//// or else use const antarctica_years_end ** ppb = arp; 
//	std::cout << (*ppa)->year << std::endl;
//	std::cout << (*(ppb + 1))->year << std::endl;
//	return 0;
//}

//// choices.cpp -- array variations
//#include<iostream>
//#include<vector>
//#include<array>
//
//using namespace std;
//
//int main() {
//
//	// C, original C++
//	double a1[4] = { 1.2, 2.4,3.6,4.8 };
//	// C++98 STL
//	vector<double> a2(4); // create vector with 4 elements
//	// no simple way to initialize in C98
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//	// C++ 11 -- create and initialize array object
//	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
//	array<double, 4> a4;
//	a4 = a3; // valid for array objects of same size 
//	// use array notation
//	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
//	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//	
//	// misdeed
//	a1[-2] = 20.2;
//	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
//	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
//	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
//
//	return 0;
//}

//
//// express.cpp -- values of expressions
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int x;
//	cout << "The expression x = 100 has the value ";
//	cout << (x = 100) << endl;
//
//	cout << "Now x = " << x << endl;
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//
//	cout.setf(ios_base::boolalpha); // a newer C++ feature
//	cout << "The expression x < 3 has the value ";
//	cout << (x < 3) << endl;
//	cout << "The expression x > 3 has the value ";
//	cout << (x > 3) << endl;
//
//	return 0;
//}


//// formore.cpp -- more looping with for
//
//#include <iostream>
//
//using namespace std;
//
//const int ArSize = 16;
//
//int main() {
//
//
//	long long factorials[ArSize];
//	factorials[1] = factorials[0] = 1LL;
//	for (size_t i = 2; i < ArSize; i++) {
//		factorials[i] = i * factorials[i - 1];
//	}
//
//	for (size_t i = 0; i < ArSize; i++){
//		cout << i << "! = " << factorials[i] << endl;
//	}
//
//
//	return 0;
//}


//// block.cpp -- use a block statement
//#include <iostream>
//
//
//int main() {
//
//	using namespace std;
//
//	cout << "The Amazing will sum and average ";
//	cout << "five numbers for you.\n";
//	cout << "Please enter five values:\n";
//
//	double number;
//	double sum = 0.0;
//
//	for (size_t i = 0; i < 5; i++){
//		cout << "Value " << i << ": ";
//		cin >> number;
//		sum += number;
//	}
//
//	cout << "Five exquisite choices indeed! ";
//	cout << "They sum to " << sum << endl;
//	cout << "and average to " << sum / 5 << ".\n";
//	cout << "The Amazing Accounto bids you adieu!\n";
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	int x = 20; // original x
//
//	{// block starts
//	
//		cout << x << endl; // use original x
//		int x = 100; // new x
//		cout << x << endl; // use new x
//
//	} // block ends
//
//	cout << x << endl; // use original x
//
//	return 0;
//}



//// forstr2.cpp -- reversing an array
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	cout << "Enter a word: ";
//	string word;
//	cin >> word;
//
//	// physically modify string object
//	char temp;
//	int i, j;
//	for (j = 0, i = word.size() - 1; j < i; --i, ++j) { // start block
//		temp = word[i];
//		word[i] = word[j];
//		word[j] = temp;
//	}
//
//	cout << word << "\n Done \n";
//
//	return  0;
//
//}


// for range-based c++ 11

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	
//	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
//
//	for (double x : prices) {
//		cout << x << endl;
//	}
//
//	cout << endl;
//	cout << endl;
//
//	for (double &x : prices) {
//		x = x * .80;
//	}
//
//	for (double x : prices) {
//		cout << x << endl;
//	}
//
//
//	return 0;
//}



//// for range-based c++11
//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	char ch;
//	int count = 0;
//	cout << "Enter characters; enter # to quit:\n";
//
//	cin >> ch;
//
//	while (ch != '#') {
//		cout << ch;
//		++count;
//		cin >> ch;
//	}
//
//	cout << endl << count << "characters read\n";
//
//	return 0;
//}




//// textin2.cpp -- using cin.get(char)
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	char ch;
//	int count = 0;
//
//
//	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);
//	while (ch != '#') {
//		count << ch;
//		++count;
//		cin.get(ch);
//	}
//
//
//	cout << endl << count << " characters read\n";
//
//	return 0;
//}


//// textin3.cpp -- reading chars to end of file
//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	char ch;
//
//	int count = 0;
//	cin.get(ch);
//
//	while (cin.fail() == false){
//		count << ch;
//		++count;
//		cin.get(ch);
//	}
//
//	cout << endl << count << " characters read\n";
//
//	return 0;
//}


//// textin.cpp -- reading chars with cin.get()
//
//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int ch;
//	int count = 0;
//
//	while ((ch = cin.get()) != EOF) {
//		cout.put(char(ch));
//		++count;
//	}
//
//	cout << endl << count << " characters read\n";
//
//	return 0;
//}
//
//



//// not.cpp -- using the not
//
//#include <iostream>
//#include <climits>
//
//
//using namespace std;
//
//bool is_int(double);
//
//int main() {
//	double num;
//	cout << "integer: ";
//	cin >> num;
//
//	while (!is_int(num)) {
//		cout << "Out";
//		cin >> num;
//	}
//
//	int value = int(num);
//	cout << "val => " << value << endl;
//	return 0;
//}
//
//bool is_int(double x) {
//	if (x <= INT_MAX && x >= INT_MIN) {
//		return true;
//	}
//	return false;
//}


//// cctypes.cpp -- using the ctype.h library
//#include <iostream>
//#include <cctype>
//
//using namespace std;
//
//int main() {
//
//	cout << "Type @ end\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@') {
//		if (isalpha(ch)) {
//			chars++;
//		}
//	}
//	return 0;
//}

//// outfile.cpp -- write to a file
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//
//	ofstream outFile;
//	outFile.open("automobile.txt");
//
//
//	cout << "make and model: ";
//	cin.getline(automobile, 50);
//	cout << "year: ";
//	cin >> year;
//	cout << "price: ";
//	cin >> a_price;
//	d_price = 0.913 * a_price;
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//
//
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//
//	return 0;
//}
//

//
//// sumafile.cpp -- functions with an array argument
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//
//const int SIZE = 60;
//
//using namespace std;
//
//int main() {
//	char filename[SIZE];
//	ifstream inFile;
//
//	cout << "filename: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//
//	if (!inFile.is_open()) {
//		cout << "can not open the file " << filename << endl;
//		cout << "program terminating." << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good()) {
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//
//	if (inFile.eof()) {
//		cout << "End of file reached.\n";
//	}
//	else if (inFile.fail()) {
//		cout << "Input terminated by data mismatch.\n";
//	}else {
//		cout << "Input terminated for unknown reason.\n";
//	}
//
//	if (count == 0) {
//		cout << "No data processed.\n";
//	} else {
//		cout << "Items read: " << count << endl;
//		cout << "Sum: " << sum << endl;
//		cout << "Avarage: " << sum / count << endl;
//	}
//	inFile.close();
//
//	return 0;
//}


//// calling.cpp -- defining, prototyping, and calling a function
//#include <iostream>
//using namespace std;
//
//void simple();
//
//int main() {
//	simple();
//	return 0;
//}
//
//void simple() {
//	
//	cout << "I am but a simple function." << endl;
//}



//// ruler.cpp -- using recursion to subdivide a ruler
//
//#include <iostream>
//
//using namespace std;
//
//const int Len = 66;
//const int Divs = 6;
//
//void subdivide(char ar[], int low, int high, int level);
//
//int main() {
//
//	char ruler[Len];
//	int i;
//
//	for (i = 1; i < Len - 2; i++) {
//		ruler[i] = ' ';
//	}
//
//	ruler[Len - 1] = '\0';
//
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//
//	for (size_t i = 1; i < Divs; i++){
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//
//		for (size_t j = 1; j < Len - 2; j++){
//			ruler[j] = ' ';
//		}
//	}
//
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level) {
//	if (level == 0) {
//		return;
//	}
//
//	int mid = (high + low) / 2;
//	ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);
//	subdivide(ar, mid, high, level - 1);
//}

//// fun_ptr.cpp -- pointers to functions
//
//#include <iostream>
//
//double betsy(int);
//double pam(int);
//
//// second argument is pointer to a type double function that
//// takes a type int argument
//void estimate(int lines, double (*pf) (int));
//
//using namespace std;
//
//int main() {
//
//	int code;
//	cout << "How many lines of code do you needs? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate:" << endl;
//	estimate(code, betsy);
//	cout << "Here's Pam's estimate:" << endl;
//	estimate(code, pam);
//	return 0;
//}
//
//
//double betsy(int lns) {
//	return 0.05 * lns;
//}
//
//double pam(int lns) {
//	return 0.03 * lns + 0.0004 * lns * lns;
//}
//
//void estimate(int lines, double (*pf)(int)) {
//	cout << lines << " lines wile take ";
//	cout << (*pf)(lines) << " hour(s)" << endl;
//}
//


//// arfupt -- an array of function pointers
//#include <iostream>
//
//using namespace std;
//
//// various notations, same signatures
//const double * f1(const double ar[], int n);
//const double * f2(const double [], int);
//const double * f3(const double *, int);
//
//
//int main() {
//	double av[3] = {1112.3, 1542.6, 2227.9};
//	
//	// pointer to a function
//	const double* (*p1) (const double*, int) = f1;
//	auto p2 = f2;
//
//	// pre-C++11 can use the following code instead
//	// const double *(*p2)(const double *, int) = f2;
//
//
//
//	return 0;
//}



//// leftover.cpp -- overloading the left() function
//#include <iostream>
//unsigned long left(unsigned long num, unsigned ct);
//char* left(const char * str, int n = 1);
//using namespace std;
//
//int main() {
//	const char * trip = "Hawaii!!"; // test value
//	unsigned long n = 12345678; // test value
//	int i;
//	char* temp;
//
//	for ( i = 1; i < 10; i++) {
//		cout << left(n, i) << endl;
//		temp = left(trip, i);
//		cout << temp << endl;
//		delete[] temp; // point to temporaray storage
//	}
//	return 0;
//}
//
//
//// This function returns the first ct digits of the number num.
//unsigned long left(unsigned long num, unsigned ct) {
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0) {
//		return 0; // return 0 if no digits
//	}
//	while (n /= 10) {
//		digits++;
//	}
//	if (digits > ct) {
//		ct = digits - ct;
//		while (ct--) {
//			num /= 10;
//		}
//		return num;
//	}
//	return num;
//
//}
//
//// This function returns a pointer to a new string 
//// consisting of the first n characters in the str string.
//char* left(const char* str, int n) {
//	if (n < 0) {
//		n = 0;
//	}
//
//	char* p = new char[n + 1];
//
//	int i;
//
//	for (i = 0; i < n && str[i]; i++) {
//		p[i] = str[i];
//	}
//
//	while (i <= n) {
//		p[i++] = '\0'; // set rest of sring to '\0'
//	}
//	return p;
//}


//// funtemp.cpp -- using a function template
//#include <iostream>
//// function template prototype
//template <typename T> // or class T
//void Swap(T& a, T& b);
//using namespace std;
//
//
//int main() {
//
//	int i = 10;
//	int j = 20;
//	cout << "i, j = " << i << ", " << j << endl;
//
//
//	return 0;
//}




