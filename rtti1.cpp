//// rtti1.cpp -- using the RTTI dynamic_cast operator
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//
//using std::cout;
//using std::endl;
//
//class Grand {
//private:
//	int hold;
//public:
//	Grand(int h = 0) : hold(h) {}
//	virtual void Speak() const { cout << "I am a grand class!" << endl; }
//	virtual int Value() const { return hold; }
//
//};
//
//class Superb : public Grand {
//public:
//	Superb(int h = 0) : Grand(h) {}
//	void Speak() const { cout << "I am superb class!!" << endl; }
//	virtual void Say() const { cout << "I hold the superb value of " << Value() << "!" << endl; }
//};
//
//class Magnificent : public Superb {
//private:
//	char ch;
//public:
//	Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
//	void Speak() const { cout << "I am a magnificent class!!!" << endl; }
//	void Say() const {
//		cout << "I hold the character " << ch << " and the integer "
//			<< Value() << "!" << endl;
//	}
//};
//
//Grand* GetOne();
//
//int main() {
//	std::srand(std::time(0));
//	Grand* pg;
//	Superb* ps;
//	for (int i = 0; i < 5; i++) {
//		pg = GetOne();
//		pg->Speak();
//		if (ps = dynamic_cast<Superb*> (pg)) {
//			ps->Say();
//		}
//
//		if (typeid(Magnificent) == typeid(*pg)) {
//			cout << "Yes, you are really magnificent." << endl;
//		}
//
//	}
//	return 0;
//}
//
//Grand* GetOne() { // generate one of three kinds of objects randomly 
//	switch (std::rand() % 3) {
//	case 0: 
//		return new Grand(std::rand() % 100);
//	case 1:
//		return new Superb(std::rand() % 100);
//	case 2:
//		return new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
//	}
//	return new Grand(std::rand() % 100);
//}
