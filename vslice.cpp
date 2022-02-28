// vslice.cpp -- using valarray slices
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint; // simplity declarations
void show(const vint & v, int cols);

int main() {
	using std::slice;
	using std::cout;
	using std::endl;

	vint valint(SIZE);

	int i;
	for (i = 0; i < SIZE; i++) {
		valint[i] = std::rand() % 10;
	}
	cout << "Original array:" << endl;
	show(valint, 3);
	vint vcol(valint[slice(1,4,3)]);
	show(vcol, 1);
	vint vrow(valint[slice(3,3,1)]);
	show(vrow, 3);
	valint[slice(2, 4, 3)] = 10;
	cout << "Set last column to 10:" << endl;
	show(valint, 3);
	cout << "Set first column to sum of next two:\n";
	// + not defined for slices, so convert to valarray<int>
	valint[slice(0,4,3)]




	return 0;
}
