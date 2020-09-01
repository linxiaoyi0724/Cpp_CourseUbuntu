//#include <iostream>
//#include <string>
//#include <memory>
//
//class Report
//{
//private:
//	std::string str;
//public:
//	Report(const std::string s) :str(s) { std::cout << "Object created!" << std::endl; }
//	~Report() { std::cout << "Object deleted! " << std::endl; }
//	void comment()const { std::cout << str << std::endl; }
//};
//
//int main()
//{
//	//{
//	//	std::auto_ptr<Report> ps(new Report("using auto_ptr"));
//	//	ps->comment();
//	//}
//
//	//{
//	//	std::shared_ptr<Report> ps(new Report("using shared_ptr"));
//	//	ps->comment();
//	//}
//
//	//{
//	//	std::unique_ptr<Report> ps(new Report("using unique_ptr"));
//	//	ps->comment();
//	//}
//
//	std::unique_ptr<std::string> ps1(new std::string("Unique ptr"));
//	std::unique_ptr<std::string> ps2;
//	ps2 = std::move(ps1);
//	std::cout << *ps2 << std::endl;
//	return 0;
//}