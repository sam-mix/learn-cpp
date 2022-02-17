//// test_ref.cpp -- test ref parameters
//#include <iostream>
//
//using namespace std;
//
//struct V {
//	int v;
//};
//
//void getV(V&);
//void showV(const V&);
//
//int main() {
//	V arr[5];
//
//	for (int i = 0; i < 5; i++){
//		getV(arr[i]);
//	}
//
//	for (int i = 0; i < 5; i++) {
//		showV(arr[i]);
//	}
//}
//
//void showV(const V & v) {
//	cout << v.v << endl;
//}
//
//void getV(V & v) {
//	cin >> v.v;
//}
