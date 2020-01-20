#include <iostream>
#include "stock2.h"

const int STKS = 4;
int main()
{
    using std::cout;
    using std::ios_base;

    stock stocks[STKS] ={stock("NanoSamrt", 12, 20.0),
                    stock("Boffo Objects", 200, 2.0),
                    stock("Monolithic obelisks", 130, 3.25),
                    stock("Fleep Enterprises", 60, 6.5)};

    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout << "stock holdings: \n";
    for(int st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }

    stock top = stocks[0];
    for(int st = 1; st < STKS; st++)
    {
        top = top.topVal(stocks[st]);
    }
    cout << "\n Most valuable holding：\n";
    top.show();
    return 0;
}