//#include <iostream>
//#include <string>
//#include <cctype>
//#include "stacktp.h"
//using namespace std;
//
//int main()
//{
//	Stack<std::string> st;
//	char ch;
//	std::string po;
//	cout << "Pleaese enter A to add purchase order " << endl;
//	cout << "P to process a PO, or Q to quit." << endl;
//	while (cin >> ch&& std::toupper(ch) != 'Q')
//	{
//		while (cin.get()!= '\n')
//		{
//			continue;
//		}
//
//		if (!std::isalpha(ch))
//		{
//			cout << "\a";
//			continue;
//		}
//
//		switch (ch)
//		{
//		case 'A':
//		case 'a':
//			cout << "Enter a PO to add:";
//			cin >> po;
//			if (st.IsFull())
//			{
//				cout << "stack is full." << endl;
//			}
//			else
//			{
//				st.Push(po);
//				
//			}
//			break;
//			
//		case 'P':
//		case 'p':
//			if (st.IsEmpty())
//			{
//				cout << "stack is empty." << endl;
//			}
//			else
//			{
//				st.Pop(po);
//				cout << "Po #" << po << " popped"<<endl;
//				break;
//			}
//		}
//		cout << "Pleaese enter A to add purchase order " << endl;
//		cout << "P to process a PO, or Q to quit." << endl;
//	}
//	cout << "Bye" << endl;
//	return 0;
//}