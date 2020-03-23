#include <iostream>
#include "mytime0.h"

int main()
{
    using std::cout;
    using std::endl;

    ME::mytime0 planning;
    ME::mytime0 coding(2,40);
    ME::mytime0 fixing(5,55);
    ME::mytime0 total;
    ME::mytime0 sub;

    cout << "planning time = ";
    planning.Show();
    cout <<endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    //total = coding.Sum(fixing);
    total = coding + fixing;
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;

    sub = coding - fixing;
    cout << "coding.Sub(fixing) = ";
    sub.Show();
    
    return 0;
}