//#include <iostream>
//using namespace std;
//
//template<typename T>
//class ManyFriend
//{
//private:
//	T item;
//x
//public:
//	ManyFriend(const T& i):item(i){}
//	template<typename C, typename D> friend void Show2(C&, D&);
//};
//
//template<typename C, typename D> void Show2(C& c, D& d)
//{
//	cout << c.item << ". " << d.item << endl;
//}
//
//int main()
//{
//	ManyFriend<int> hfi1(10);
//	ManyFriend<int> hfi2(20);
//	ManyFriend<double> hfdb(10.5);
//	cout << "hft1, htf2: ";
//	Show2(hfi1, hfi2);
//	cout << "hfdb, htf1: ";
//	Show2(hfdb, hfi1);
//	return 0;
//}