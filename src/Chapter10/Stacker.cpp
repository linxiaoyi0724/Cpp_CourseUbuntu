/*
#include <iostream>
#include "./Stack.h"
#include <cctype>
int main()
{
    using namespace std;
    Stack stack;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order.\n P to process a PO, or Q to quit. \n";
    while(cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch (ch)
        {
        case 'A':
        case 'a':
            cout <<"Enter a PO number to add: ";
            cin >> po;
            if(stack.isFull())
                cout <<" stack already full " << endl;
            else
            {
                stack.push(po);
            }
            break;

        case 'P':
        case 'p':
            if(stack.isEmpty())
            {
                cout << "stack already empty" << endl;
            }
            else
            {
                stack.pull(po);
                cout << "PO #" << po << "popped" <<endl;
            }
            break;
        }
        cout << "Please enter A to add a purchase order." <<endl;
        cout << "P to process a PO, or Q to quit" << endl;
    } 
    cout << "Bye" <<endl;
    return 0;
}
*/