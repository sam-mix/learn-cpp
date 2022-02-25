//// fowl2.cpp -- unique_ptr a poor choice
//#include <iostream>
//#include <string>
//#include <memory>
//
//int main() {
//	using namespace std;
//	unique_ptr<string> films[5] = {
//		unique_ptr<string>(new string("Fowl Balls")),
//		unique_ptr<string>(new string("Duck walks")),
//		unique_ptr<string>(new string("Chicken Runs")),
//		unique_ptr<string>(new string("Turkey Errors")),
//		unique_ptr<string>(new string("Goose Eggs")),
//	};
//	unique_ptr<string> pwin;
//	pwin = move(films[2]); // films[2] loses ownership
//
//	cout << "The nominees for best avian baseball film are" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << *films[i] << endl;
//	}
//	cout << "The winner is " << *pwin << endl;
//	return 0;
//}