// stock10.h -- Stock 
#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>

using namespace std;

class Stock {
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = share_val * shares; }

public:
	// two constuctors
	Stock(); // default constructor
	Stock(const string& co, long n = 0, double pr = 0.0);
	~Stock();// noisy destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};


#endif // !STOCK10_H_
