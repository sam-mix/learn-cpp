//// vect2.cpp -- methods and iteraters
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Review {
//	std::string title;	//  È√˚
//	int rating;			// ∆¿∑÷
//};
//
//bool FillReview(Review& rr);
//void ShowReview(const Review & rr);
//
//int main() {
//	using std::cout;
//	using std::vector;
//	using std::endl;
//	vector<Review> books;
//	Review temp;
//
//	while (FillReview(temp))
//	{
//		books.push_back(temp);
//	}
//
//	int num = books.size();
//	if (num > 0) {
//		cout << "Thank you. Yopu entered the following:" << endl;
//		cout << "Rating\tBook" << endl;
//		for (int i = 0; i < num; i++) {
//			ShowReview(books[i]);
//		}
//		cout << "Reprising:" << endl;
//		cout << "Rating\tBook" << endl;
//		vector<Review>::iterator pr;
//		for (pr = books.begin(); pr != books.end(); pr++) {
//			ShowReview(*pr);
//		}
//		vector <Review> oldlist(books); // copy constructor used
//		if (num > 3) {
//			// remove 2 items
//			books.erase(books.begin() + 1, books.begin() + 3);
//			cout << "After erasure:" << endl;
//			for (pr = books.begin(); pr != books.end(); pr++) {
//				ShowReview(*pr);
//			}
//			books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 3);
//		}
//
//	}
//
//	return 0;
//}
