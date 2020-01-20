#include <iostream>
#include "stock1.h"
int main()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);

    std::cout << "Using constructor to creat new object " << std::endl;
    stock1 St1("NanoSmart", 12, 20);
    St1.show();
    stock1 St2 = stock1("Boffo Objects", 2, 2.0);
    St2.show();

    std::cout << "Assigning St1 to St2: " << std::endl;
    St2 = St1;
    std::cout << "Listing St1 and St2: " << std::endl;
    St1.show();
    St2.show();

    std::cout << "Using a constructor to reset an object"<<std::endl;
    St1 = stock1("Nifty Food", 10, 50);
    std::cout << "Revised stock1: "<< std::endl;
    St1.show();
    std::cout << "Done" << std::endl;
    return 0;
}