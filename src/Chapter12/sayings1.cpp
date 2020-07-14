/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using namespace std;
    Str name;
    cout << "Hi, what's your name? " << endl;
    cin >> name;

    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:" << endl;
    Str sayings[ArSize];
    char temp[MaxLen];

    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ":";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
        {
            continue;
        }
        if ((!cin || temp[0] == '\0'))
            break;
        else
        {
            sayings[i] = temp;
        }
    }

    int total = i;

    if (total > 0)
    {
        cout << "Here are your sayings: " << endl;
        for (int i = 0; i < total; i++)
        {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        Str *shortest = &sayings[0];
        Str *first = &sayings[0];

        for (int i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
            {
                shortest = &sayings[i];
            }

            if (sayings[i] < *first)
            {
                first = &sayings[i];
            }
        }

        cout << "Shortest saysings: " << endl;
        cout << *shortest << endl;
        cout << "First alphabetically: " << endl
             << *first << endl;

        srand(time(0));
        int choice = rand() % total;
        Str* favorite = new Str(sayings[choice]);
        cout <<"My favorite sayings: " << endl << *favorite << endl;
        delete favorite;
    }
    else
    {
        cout << "No much to say!" <<endl;
    }
    cout << "Bye." <<endl;
    

    return 0;
}
*/

