//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <iterator>
//#include <algorithm>
//#include <cctype>
//using namespace std;
//
//char toLower(char ch) { return tolower(ch); }
//string& ToLower(string &st);
//void display(const string & s);
//
//int main()
//{
//	vector<string> words;
//	cout << "Enter words (enter quit to quit): " << endl;
//	string input;
//	while (cin >> input &&  input != "quit")
//	{
//		words.push_back(input);
//	}
//
//	cout << "You entered the following words: " << endl;
//	for_each(words.begin(), words.end(), display);
//	cout << endl;
//
//	set<string> wordSet;
//	transform(words.begin(), words.end(), insert_iterator<set<string>>(wordSet, wordSet.begin()), ToLower);
//	cout << endl;
//	cout << "Alphabetic list of words: " << endl;
//	for_each(wordSet.begin(), wordSet.end(), display);
//	cout << endl;
//
//	map<string, int> wordMap;
//	set<string>::iterator si;
//	for (si = wordSet.begin(); si != wordSet.end(); si++)
//	{
//		wordMap[*si] = count(words.begin(), words.end(), *si);
//	}
//
//	cout << "\nWord frequency: " << endl;
//	for (si = wordSet.begin(); si != wordSet.end(); si++)
//	{
//		cout << *si << ": " << wordMap[*si] << endl;
//	}
//	return 0;
//}
//
//string& ToLower(string & st)
//{
//	transform(st.begin(), st.end(), st.begin(), toLower);
//	return st;
//}
//
//void display(const string &s)
//{
//	cout << s << " ";
//}