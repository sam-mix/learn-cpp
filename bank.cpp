//// back.cpp -- using the Queue interface
//// compile with queue.cpp 
//#include <iostream>
//#include <cstdlib> // for rand() and srand()
//#include <ctime> // for time()
//#include "queue.h"
//
//using namespace std;
//
//const int MIN_PER_HR = 60;
//
//bool newcustomer(double x); // is therea new customer
//
//int main() {
//	// setting things up
//	srand(time(0)); // random initializing of rand()
//
//	cout << "Case Study: Bark of Heather Automatic Teller" << endl;
//	cout << "Enter maximum size of queue: ";
//	int qs;
//	cin >> qs;
//	Queue line(qs); // line queue holds up to qs people
//
//	cout << "Enter the number of simulation hours: ";
//	int hours;
//	cin >> hours;
//	// simulation will run 1 cycle per minute
//	long cyclelimit = MIN_PER_HR * hours; //  # of cycles
//	cout << "Enter the average number of customers per hour: ";
//	double perhour; // average # of arrival per hour
//	cin >> perhour;
//	double min_per_cust; // aversage time between arrivals
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Item temp; // new customer data
//	long turnaways = 0; // turned away by full queue
//	long customers = 0; // joined the queue
//	long served = 0; // served during the simulation
//	long sum_line = 0; // cumulative line length
//	int wait_time = 0; // time util autoteller is free
//	long line_wait = 0; // cumulative time in line 
//
//	// running the simulation
//	for (int cycle = 0; cycle < cyclelimit; cycle ++) {
//		if (newcustomer(min_per_cust)) { // have newcomer
//			if (line.isfull()) {
//				turnaways++;
//			} else {
//				customers++;
//				temp.set(cycle);
//				line.enqueue(temp);
//			}
//		}
//		if (wait_time <= 0 && !line.isempty()) {
//			line.dequeue(temp);
//			wait_time = temp.ptime();
//			line_wait += cycle - temp.when();
//			served++;
//		}
//		if (wait_time > 0) {
//			wait_time--;
//		}
//		sum_line += line.queuecount();
//	}
//
//	// reporting results
//	if (customers > 0) {
//		cout << "customers accepted: " << customers << endl;
//		cout << "  customers served: " << served << endl;
//		cout << "         turnaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout << (double)sum_line / cyclelimit << endl;
//		cout << " average wait time: "
//			<< (double)line_wait / served << " minutes." << endl;
//	} else {
//		cout << "No customers!" << endl;
//	}
//	cout << "Done!" << endl;
//
//	return 0;
//}
//
//// x= average time, in minutes, between customers
//// return value is ture if customer shows up this minutes
//bool newcustomer(double x) {
//	return (rand() * x / RAND_MAX < 1);
//}
//
//
//
//
