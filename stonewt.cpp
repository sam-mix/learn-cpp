// stonewt.cpp -- Stonewt class
#include <iostream>
#include "stonewt.h"

using namespace std;

// constructor Stoewt object from double value 
Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn; // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stone * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {}

// show weight in stones
void Stonewt::show_stn() const {
	cout << stone << " stone, " << pds_left << " pounds." << endl;
}

// show weight in pounds
void Stonewt::show_lbs() const {
	cout << pounds << " pounds." << endl;
}
