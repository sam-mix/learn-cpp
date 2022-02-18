// back.cpp -- using the Queue interface
// compile with queue.cpp 
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "queue.h"

using namespace std;

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is therea new customer

int main() {
	// setting things up
	srand(time(0)); // random initializing of rand()

	cout << "Case Study: Bark of Heather Automatic Teller" << endl;
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs); // line queue holds up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours; //  # of cycles
	cout << "Enter the average number of customers per hour: ";
	double perhour; // average # of arrival per hour
	cin >> perhour;
	double min_per_cust; // aversage time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp; // new customer data







	return 0;
}
