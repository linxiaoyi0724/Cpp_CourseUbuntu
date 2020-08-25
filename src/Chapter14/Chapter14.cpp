//1.
//    1). 公有派生
//    2). 私有派生
//    3). 公有派生
//    4). 私有派生
//    5). 私有派生
//
//2.
//    Gloam::Gloam(int g, const char* s):glip(g),fb(s){}
//    Gloam::Gloam(int g, const Frabjous& f):glip(g),fb(f){}
//    void Gloam::tell()
//    {
//        cout << glip;
//        fb.tell();
//    }
//
//3.
//    Gloam::Gloam(int g = 0; const char* s = "C++"):Frabjous(s),glip(g){}
//    Gloam::Gloam(int g, const Frabjous& f):Frabjous(f),glip(g){}
//    void Gloam::tell()
//    {
//        cout << glip;
//        Frabjous::tell();
//    }
//
//4.
//class Stack<Worker*>
//{
//private:
//	enum{MAX = 10};
//	Worker* item[MAX];
//	int top;
//
//public:
//	Stack();
//	bool isFull();
//	bool isEmpty();
//	bool push(const Worker* & item);
//	bool pop(Woker* & item);
//};
//
//5.
//	ArrayTP<string> sa
//	StackTp<ArrayTP<double>> sb
//	ArrayTP<Stack<Worker*>> sc
//
//6.	非虚基类能继承多个基类对象， 虚基类只能继承一个基类对象。
//	如果继承路线有相同的组先，则类中包含组先成员的两个拷贝。