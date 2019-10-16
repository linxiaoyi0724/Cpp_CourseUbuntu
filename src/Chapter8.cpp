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





/*
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
*/








/*
#include <iostream>
void swapByValue(int x, int y);
void swapByReferences(int& x, int& y);
void swapByPoint(int* x, int* y);
int main()
{
    int wallet1 = 300;
    int wallet2 = 350;

    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $"<<wallet2<<std::endl;
    std::cout << "Using references to swap contents" << std::endl;
    swapByReferences(wallet1, wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $"<<wallet2<<std::endl;
    std::cout << "Using Pointers to swap contents again:" <<std::endl;
    swapByPoint(&wallet1,&wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $"<<wallet2<<std::endl;  
    std::cout << "Try to use passing by value:"<<std::endl;
    swapByValue(wallet1,wallet2);
    std::cout << "wallet1 = $" << wallet1 << " wallet2 = $"<<wallet2<<std::endl;  
    return 0;
}

void swapByValue(int x, int y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
}

void swapByReferences(int& x, int& y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
}

void swapByPoint(int* x, int* y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
*/




/*
#include <iostream>
double cube(double x);
double rfCube(double& a);
int main()
{
    double x =3;
    std::cout << cube(x) << " = cube of "<< x <<std::endl;
    std::cout << rfCube(x) << " = cube of " << x<<std::endl;
    return 0;
}

double cube(double x)
{
    x *= x *x;
    return x;
}

double rfCube(double& a)
{
    a *= a * a;
    return a;
}
 */




/*
#include <iostream>
struct snap
{
    char name[26];
    char quote[64];
    int used;
};

const snap& use(snap& sysopref);

int main()
{
    snap looper = {"Rick \"Fortran\" Looper",
                   "I'm a goto kind of guy.",
                   0};

    use(looper);
    std::cout <<" Looper: " << looper.used << " use(s)\n";
    snap copycat;
    copycat = use(looper);
    std::cout << "Looper: " << looper.used << " use(s)\n";
    std::cout << "Copycat: " << copycat.used << "use(s)\n";
    std::cout <<"use(looper): " << use(looper).used << " use(s)\n";
    return 0;
}

const snap& use(snap& sysopref)
{
    std::cout << sysopref.name << " says:\n";
    std::cout << sysopref.quote << std::endl;
    sysopref.used++;
    return  sysopref;
}
*/

