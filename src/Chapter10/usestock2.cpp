/*
#include "./stock2.h"
#include <iostream>
using std::cout;
using std::endl;

const int SKS = 4;
int main()
{
    Stock stocks[SKS] = 
    {
        Stock("NanoSmart", 12, 20.00),
        Stock("Boffo Objects", 200, 2.00),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises",60,6.50)
    };

    cout.precision(2);
    cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    cout.setf(std::ios_base::showpoint);

    for(int i = 0; i < SKS; i++)
    {
        stocks[i].show();
    }

    Stock top = stocks[0];
    for(int i = 1; i< SKS;i++)
    {
        top = top.topVal(stocks[i]);
    }
    cout << "Most valuable holding: " <<endl;
    top.show();
    return 0;
}
*/