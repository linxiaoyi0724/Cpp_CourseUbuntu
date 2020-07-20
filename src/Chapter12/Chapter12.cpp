//1.
//a.没有为私有成员变量赋初值；
//b.应当使用new[]和 strcpy();
//c. 没有给str变量申请内存；
//
//2.
//	1.使用完没有释放内存 解决：必须在析构函数中调用delete 变量名释放；
//	2.没有给成员分配内存  解决：必须在构造函数中给指针成员变量申请内存；
//	3.
//
//3.
//	1.复制构造函数
//	2.默认构造函数
//	3.赋值操作符
//
//4.
//	nifty::nifty()
//	{
//	personality = new char[1];
//	personality = NULL;
//	talents = 0;
//	}
//
//	nifty::nifty()
//	{
//		personality = new char[strlen(s)];
//		strcpy(personality, s);
//		talents = 0;
//	}
//
//	ostream& nifty::operator<<(ostream& os, nifty& n)
//	{
//		os << n.personality << "：  " << n.talents;
//	}
//
//	5.
//		a. 1.