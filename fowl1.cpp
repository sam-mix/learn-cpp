//// fowl1.cpp -- shared_ptr a poor choice
//#include <iostream>
//#include <string>
//#include <memory>
//
//int main() {
//	using namespace std;
//	shared_ptr<string> films[5] = {
//		shared_ptr<string>(new string("Fowl Balls")),
//		shared_ptr<string>(new string("Duck walks")),
//		shared_ptr<string>(new string("Chicken Runs")),
//		shared_ptr<string>(new string("Turkey Errors")),
//		shared_ptr<string>(new string("Goose Eggs")),
//	};
//	shared_ptr<string> pwin;
//	pwin = films[2]; // films[2] loses ownership
//
//	cout << "The nominees for best avian baseball film are" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << *films[i] << endl;
//	}
//	cout << "The winner is " << *pwin << endl;
//	return 0;
//}