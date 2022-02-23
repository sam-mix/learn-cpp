//// nested.cpp -- using the queue that a nested class
//#include <iostream>
//
//#include <string>
//#include "queuetp.h"
//
//int main() {
//
//	using std::string;
//	using std::cin;
//	using std::cout;
//	using std::endl;
//
//	QueueTP<string> cs(5);
//	string temp;
//
//	while (!cs.isfull()) {
//		cout << "Please enter your name. You will be "
//			"served in the order of arrival." << endl
//			<< "name: ";
//		getline(cin, temp);
//		cs.enqueue(temp);
//	}
//	cout << "The queue is full. Process begins!" << endl;
//	
//	while (!cs.isempty()) {
//		cs.dequeue(temp);
//		cout << "Now processing " << temp << " ..." << endl;
//	}
//
//	return 0;
//}