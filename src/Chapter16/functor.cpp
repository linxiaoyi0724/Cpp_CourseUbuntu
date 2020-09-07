//#include <iostream>
//#include <algorithm>
//#include <list>
//#include <iterator>
//
//template<typename T>
//class TooBig
//{
//private:
//	T cutoff;
//public:
//	TooBig(const T& t):cutoff(t){}
//	bool operator()(const T& v) { return v > cutoff; }
//};
//
//void OutInt(int n) { std::cout << n << " "; }
//
//int main()
//{
//	using std::list;
//	using std::cout;
//	using std::endl;
//
//	TooBig<int> f100(100);
//	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
//	list<int> yadayada(vals, vals + 10);
//	list<int> etcetera(vals, vals + 10);
//
//	cout << "Original lists: " << endl;
//	std::for_each(yadayada.begin(), yadayada.end(), OutInt);
//	cout << endl;
//
//	std::for_each(etcetera.begin(), etcetera.end(), OutInt);
//	cout << endl;
//
//	yadayada.remove_if(f100);
//	etcetera.remove_if(TooBig<int>(200));
//
//	cout << "Trimmed lists: " << endl;
//	std::for_each(yadayada.begin(), yadayada.end(), OutInt);
//	cout << endl;
//
//	std::for_each(etcetera.begin(), etcetera.end(), OutInt);
//	cout << endl;
//
//	return 0;
//}