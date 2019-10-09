//
// Created by yihuang on 10/9/2019.
//



/*
#include <iostream>
inline  double square(double x){ return x*x;}
int main()
{
    double a,b;
    double c = 13.0;
    a = square(5);
    b = square(4.5 + 7.5);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "c = " << c << ", c square = " << square(c++) <<std::endl;
    std::cout << "Now c = " << c<<std::endl;
    return 0;
}
*/






/*
#include <iostream>
int main()
{
    int rats = 101;
    int& rodents = rats;
    std::cout << "rats = " << rats << ", rodents = " << rodents << std::endl;
    rodents++;
    std::cout << "rats = " << rats << ", rodents = " << rodents << std::endl;
    std::cout << "rats address = " << &rats << ", rodents = " << &rodents<<std::endl;
    return 0;
}
*/




#include <iostream>
int main()
{
    int rats = 101;
    int& rodents = rats;
    std::cout<<"rats = " << rats << ", rodents = " << rodents << std::endl;
    std::cout<<"rats address = " << &rats << ", rodents address = " << &rodents << std::endl;

    int bussies = 50;
    rodents =  bussies;
    std::cout << "bussies = " << bussies << ", rats = " << rats << ", rodents = " << rodents <<std::endl;
    std::cout << "bussies address = " << &bussies << " , rats address is " << &rats << ", rodents address is " << &rodents<<std::endl;
    return 0;
}

