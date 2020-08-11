//#include <iostream>
//#include <cstring>
//#include "workermi.h"
//const int SIZE = 5;
//using namespace std;
//int main()
//{
//    WokrerMi* lolas[SIZE];
//    int ct;
//    for(ct = 0; ct < SIZE; ++ct)
//    {
//        char choice;
//        cout << "Enter the employee category: "<<endl;
//        cout << "w:waiter  s:singer "<<endl;
//        cout << "t: singerwaiter  q:quit" <<endl;
//        cin >> choice;
//        while (strchr("wstq",choice)==NULL)
//        {
//            cout << "Please enter w s t or q: ";
//            cin >>choice;
//        }
//        if(choice == 'q')
//        {
//            break;
//        }
//        switch (choice)
//        {
//        case 'w':
//            lolas[ct] = new WaiterMi;
//            break;
//        
//        case 's':
//            lolas[ct] = new SignerMi;
//            break;
//        case 't':
//            lolas[ct] = new SignerWaiter;
//            break;
//        }
//        cin.get();
//        lolas[ct]->Set();   
//    }
//
//
//    cout << endl << "Here is your staff: "<<endl;
//    int i;
//    for(i = 0; i < ct; i++)
//    {
//        cout<<endl;
//        lolas[i]->Show();
//    }
//    for(i = 0 ; i < ct; i++)
//    {
//        delete lolas[i];
//    }
//    cout << "Bye. "<<endl;
//    return 0;
//}