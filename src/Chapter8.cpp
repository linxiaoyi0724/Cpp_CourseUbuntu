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







/*
#include <iostream>
#include <string>
std::string version0(const std::string& s1, const std:: string&  s2);
std::string& version1(std::string& s1, const std::string& s2);
std::string& version2(const std::string& s1, const std::string& s2);
int main()
{
    std::string input;
    std::string copy;
    std::string result;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    copy = input;
    std::cout << "Your string as entered: " << input << std::endl;
    result = version0(input, "***");
    std::cout << "Your string enhanced:  "<< result <<std::endl;
    std::cout << "Your original string: " << input << std::endl;

    result = version1(input, "###" );
    std::cout << "Your string enhanced: " << result <<std::endl;
    std::cout << "Your original string: " << input << std::endl;

    std::cout << "Resetting original string." <<std::endl;
    input = copy;
    result = version2(input, "@@@");
    std::cout << "Your string enhanced: " << result <<std::endl;
    std::cout << "Your original string: " << input << std::endl;
    return 0;
}

std::string version0(const std::string& s1, const std::string& s2)
{
    std::string temp;
    temp =s2 + s1 +s2;
    return  temp;
}

std::string& version1(std::string& s1, const std::string& s2)
{
    s1 = s2 + s1 +s2;
    return  s1;
}

std::string& version2(const std::string& s1, const std::string& s2)
{
    std::string temp;
    temp = s2 + s1 +s2;
    return temp;
}

*/








/*
#include <iostream>
#include <cstdlib>
#include <fstream>

const int NLIMIT = 5;

void file_it(std::ostream& os, double fo, double eye[], const int n);

int main()
{
    std::ofstream fout;
    const char* fn = "exp-data.txt";
    fout.open(fn);
    if(!fout.is_open())
    {
        std::cout <<" Can't open the txt." << std::endl << "Bye!" <<std::endl;
        std::exit(EXIT_FAILURE); 
    }

    double fo;
    std::cout << "Enter the focal length of your telescope objective in mm: ";
    std::cin >> fo;

    double eye[NLIMIT];
    std::cout << "Enter the focal lengths, in mm, of 5 eyepieces:" << std::endl;
    for(int i = 0; i < NLIMIT; i++)
    {
        std::cout << "Eyepiece #"<<i+1<<": ";
        std::cin >> eye[i];
    }
    file_it(fout, fo, eye, NLIMIT);
    file_it(std::cout, fo, eye, NLIMIT);
    std::cout << " Done! " <<std::endl;
}

void file_it(std::ostream& os, double fo, double eye[], const int n)
{
    std::ios_base::fmtflags initial;
    initial = os.setf(std::ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm" << std::endl;
    os.width(12);
    os << "f eyepiece";
    os.width(15);
    os << "magnification\n";
    for(int i = 0; i < n; i++)
    {
        os.width(12);
        os<<eye[i];
        os.width(15);
        os<<int(fo / eye[i] + 0.5) << std::endl;
    }
    os.setf(initial);
    
}
*/








