//// binaryio.cpp -- binary file I/O
//#include <iostream> // not required by most systems
//#include <fstream>
//#include <iomanip>
//#include <cstdlib> // for exit
//
//inline void eatline() { while (std::cin.get() != '\n') { continue; } }
//
//const int LIM = 20;
//
//struct planet {
//	char name[LIM]; // name of planet
//	double population; // population of planet
//	double g; // its acceleration of gravity
//};
//
//
//const char* file = "planet.dat"; // ASSUMED TO EXIST (binary.cpp excample)
//
//
//int main() {
//	using namespace std;
//	planet pl;
//	cout << fixed << right;
//
//	// show initial contents
//	ifstream fin;
//	fin.open(file, ios_base::in| ios_base::binary); // binary file
//	// NOTE: some systems don't accept the ios_base::binary mode
//	if (fin.is_open()) { 
//		cout << "Here are the current contents of the ";
//		cout << file << " file:" << endl;
//		while (fin.read((char*)&pl, sizeof pl)) {
//			cout << ": " << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//	// add new data
//	ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
//	// NOTE: some systems don't accept the ios_base::binary mode
//	if (!fout.is_open()) {
//		cerr << "Can't open " << file << " file for output:" << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	cout << "Enter planet name: £¨enter a black lint to quit£©: \n";
//	cin.get(pl.name, LIM);
//	while (pl.name[0] != '\0') {
//		eatline();
//		cout << "Enter planetary population: ";
//		cin >> pl.population;
//		cout << "Enter planet's acceleration of gravity: ";
//		cin >> pl.g;
//		eatline();
//		fout.write((char *) &pl, sizeof pl);
//		cout << "Enter planet name: £¨enter a black lint to quit£©: \n";
//		cin.get(pl.name, LIM);
//	}
//	fout.close();
//
//	// show revised file
//	fin.clear(); // not required for some implementations, but won't hurt
//	fin.open(file, ios_base::in | ios_base::binary); // binary file
//	// NOTE: some systems don't accept the ios_base::binary mode
//	if (fin.is_open()) {
//		cout << "Here are the new contents of the ";
//		cout << file << " file:" << endl;
//		while (fin.read((char*)&pl, sizeof pl)) {
//			cout << ": " << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		fin.close();
//	}
//
//	return 0;
//}
//
//
