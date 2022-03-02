//// randomio.cpp -- random access to a binary file
//
//#include <iostream> // not required by most systems
//#include <fstream>
//#include <iomanip>
//#include <cstdlib> // for exit()
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
//inline void eatline() { while (std::cin.get() != '\n') { continue; } }
//
//int main() {
//	using namespace std;
//	planet pl;
//	cout << fixed;
//
//	// show initial contents
//	fstream finout;
//	finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
//	// NOTE: Some Unix systems require omitting | ios::binary
//	int ct = 0;
//	if (finout.is_open()) {
//		finout.seekg(0); // go to beginning
//		cout << "Here are the current contents of the " << file << " file:" << endl;
//		while (finout.read((char *) &pl, sizeof pl)) {
//			cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//				<< setprecision(0) << setw(12) << pl.population
//				<< setprecision(2) << setw(6) << pl.g << endl;
//		}
//		if (finout.eof()) {
//			finout.clear();
//		} else {
//			cerr << "Error in reading " << file << "." << endl;
//			exit(EXIT_FAILURE);
//		}
//	} else {
//		cerr << file << " could not be opened -- bye." << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	// change a record
//	cout << "Enter the record number you wish to change: ";
//	long rec;
//	cin >> rec;
//	eatline();
//	if (rec < 0 || rec >= ct) {
//		cerr << "Invalid record number -- bye." << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	streampos place = rec * sizeof pl; // convert to streampos type
//	finout.seekg(place); // random access
//	if (finout.fail()) {
//		cerr << "Error on attempted seek" << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	finout.read((char *) &pl,sizeof pl);
//	cout << "Your selection:" << endl;
//	cout << rec << ": " << setw(LIM) << pl.name << ": "
//		<< setprecision(0) << setw(12) << pl.population
//		<< setprecision(2) << setw(6) << pl.g << endl;
//	if (finout.eof()) {
//		finout.clear(); // clear eof flag
//	}
//
//	cout << "Enter planet name: ";
//	cin.get(pl.name, LIM);
//	eatline();
//	cout << "Enter planetary population: ";
//	cin >> pl.population;
//	cout << "Enter planet's acceleration of gravity: ";
//	cin >> pl.g;
//	finout.seekg(place); // go back 
//	finout.write((char *) &pl, sizeof pl) << flush;
//	if (finout.fail()) {
//		cerr << "Error on attempted write" << endl;
//		exit(EXIT_FAILURE);
//	}
//
//	// show revised file
//	ct = 0;
//	finout.seekg(0); // go to beginning of file 
//	cout << "Here are the new contents of the " << file << " file:" << endl;
//	cout << "Here are the current contents of the " << file << " file:" << endl;
//	while (finout.read((char*)&pl, sizeof pl)) {
//		cout << ct++ << ": " << setw(LIM) << pl.name << ": "
//			<< setprecision(0) << setw(12) << pl.population
//			<< setprecision(2) << setw(6) << pl.g << endl;
//	}
//	finout.close();
//	cout << "Done." << endl;
//	return 0;
//}