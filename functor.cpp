//// functor.cpp -- using a functor
//
//#include<iostream>
//#include<list>
//#include<iterator>
//#include<algorithm>
//
//template<class T> // functor class defines operator()()
//class TooBig {
//private:
//	T cutoff;
//public:
//	TooBig(const T& t) : cutoff(t) {}
//	bool operator()(const T& v) { return v > cutoff; }
//};
//
//using std::cout;
//
//void outint(int n) { cout << n << " "; }
//
//int main() {
//	using std::list;
//	using std::endl;
//
//	TooBig<int> f100(100); // limit = 100
//	int vals[10] = { 1,2,1000,10000,10000,88888,237478,234,234,34534};
//	list<int> y(vals, vals + 10);
//	list<int> e(vals, vals + 10);
//
//	cout << "Original lists: " << endl;
//	for_each(y.begin(), y.end(), outint);
//	cout << endl;
//	for_each(e.begin(), e.end(), outint);
//	cout << endl;
//
//	y.remove_if(f100);
//	e.remove_if(TooBig<int>(10000));
//	cout << "Trimmed lists: " << endl;
//	for_each(y.begin(), y.end(), outint);
//	cout << endl;
//	for_each(e.begin(), e.end(), outint);
//
//	cout << endl;
//
//}
