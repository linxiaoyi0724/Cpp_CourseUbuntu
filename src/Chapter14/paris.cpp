//#include <iostream>
//#include <string>
//using namespace std;
//template<typename T1, typename T2>
//class Paris
//{
//private:
//	T1 a;
//	T2 b;
//public:
//	T1& first();
//	T2& second();
//	T1 first()const { return a; }
//	T2 second()const { return b; }
//
//	Paris(const T1& aval, const T2& bval) :a(aval),b(bval){}
//	Paris(){}
//};
//
//template<typename T1, typename T2>
//T1& Paris<T1, T2>::first()
//{
//	return a;
//}
//
//template <typename T1, typename T2>
//T2& Paris<T1, T2>::second()
//{
//	return b;
//}
//
//int main()
//{
//	Paris<string, int> ratings[4] =
//	{
//		Paris<string,int>("The purple Duke", 5),
//		Paris<string,int>("jake", 4),
//		Paris<string,int>("Mont",5),
//		Paris<string,int>("Gertie",3)
//	};
//
//	int joints = sizeof(ratings) / sizeof(Paris<string, int>);
//	cout << "Rating: " << endl;
//	for (int i = 0; i < joints; ++i)
//	{
//		cout << ratings[i].second() << ":\t" << ratings[i].first() << endl;
//	}
//	cout << "Oops! Revised rating: " << endl;
//	ratings[3].first() = "Gre";
//	ratings[3].second() = 6;
//	cout << ratings[3].second() << ":\t" << ratings[3].first() << endl;
//	return 0;
//}