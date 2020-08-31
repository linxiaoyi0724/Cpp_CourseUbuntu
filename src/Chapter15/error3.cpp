//#include <iostream>
//using namespace std;
//
//double Hmean(double x, double y);
//int main()
//{
//	double x, y, z;
//	cout << "please input two number: ";
//	while (cin >>x>>y)
//	{
//		try
//		{
//			z = Hmean(x, y);
//		}
//		catch(const char* s)
//		{
//			std::cout << s << endl;
//			cout << "Enter two numbers: ";
//			continue;
//		}
//		cout << x << " and " << y << " hmean is  " << z << endl;
//		cout << "Enter two numbers: ";
//	}
//}
//
//double Hmean(double x, double y)
//{
//	if (x == -y)
//	{
//		throw "bad hmean() ";
//	}
//	return 2.0* x*y / (x + y);
//}