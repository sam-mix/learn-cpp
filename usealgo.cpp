// usealgo.cpp -- using severa STL elements
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;

char toLower(char ch) { return tolower(ch); }
string& ToLower(string & st);
void display(const string & s);

int main() {

	vector<string> words;
	cout << "Enter words (enter quit to quit): \n";
	string input;
	while (cin >> input && input != "quit") {
		words.push_back(input);
	}

	cout << "You entered the following words:\n";
	for_each(words.begin(), words.end(), display);
	cout << endl;

	// place words in set, converting to lowercase
	set<string> wordset;
	transform(words.begin(), words.end(),
		insert_iterator<set<string>>(wordset, wordset.begin()),
		ToLower);
	cout << "\nAlphabetic list of words:\n";
	for_each(wordset.begin(), wordset.end(), display);
	cout << endl;

	// pleasev word and frenquency in map
	map<string, int> wordmap;
	set<string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); si++) {
		wordmap[*si] = count(words.begin(), words.end(), *si);
	}

	return 0;
}
