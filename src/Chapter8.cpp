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






/*
#include <iostream>
const int arrSize = 80;
char* left(const char arr[], int n = 1);
int main()
{
    char arr[arrSize];
    std::cout << "Enter a string: ";
    std::cin.get(arr,arrSize);
    char* p = left(arr,4);
    std::cout << p << std::endl;
    delete []p;
    p = left(arr);
    std::cout << p << std::endl;
    delete []p;
    return 0;
}

char* left(const char arr[], int n)
{
    char* p = new char[n+1];
    int i;
    for(i = 0; i < n; i++)
    {
        p[i] = arr[i];
    }
    while(i < n)
    {
        p[i++] = '\0';
    }
    return p;
}
*/





/*
#include <iostream>
#include <cstring>
const int arSize = 80;
char* left(const char arr[], int n = 1);
unsigned long left(unsigned long number, unsigned n);
int main()
{
    char arr[arSize] = "Hawaii!!";
    unsigned long number = 12345678;
    int i;
    for(i = 1; i <=8; i++)
    {
         std::cout << left(number,i)<<std::endl;
         std::cout << left(arr,i) << std::endl;
    }
    return 0;
}

char* left(const char arr[], int n)
{
    int len = strlen(arr);
    int num = (len > n) ? len : n;
    char* p = new char(num);
    int i ;
    for(i = 0; i < n && arr[i]; i++)
    {
        p[i] = arr[i];
    }
    while(i < n )
    {
        p[i++] = '\n';
    }
    return p;
}

unsigned long left(unsigned long number, unsigned n)
{
    int n1 = number;
    int len = 0;
    while (n1!=0)
    {
        n1 = n1 /10;
        len++;
    }
    int newN = len - n;
    for(int i = newN; i >0; i--)
    {
        number = number / 10;
    }
    return number;
}
*/





/*
#include <iostream>
template <typename T>
void swap(T& a, T& b);
int main()
{
    int i = 10, j = 20;
    std::cout << "Using compiler-generated int swapper:" <<std::endl;
    swap(i,j);
    std::cout << "i, j = " << i << ", " << j << std::endl;

    double x = 24.5, y = 81.7;
    std::cout << "Using compiler-generated double swapper: " << std::endl;
    swap(x,y);
    std::cout << "x, y = " << x << ", " << y << std::endl;
    return 0;
}

template <typename T>
void swap(T& a, T& b)
{
    T temp =0;
    temp = a;
    a = b;
    b = temp;
}
*/








/*
#include <iostream>
template <typename T>
void swap(T& a, T& b);

template <typename T>
void swap(T* a, T* b, int n);

template <typename T>
void show(T* arr, int n);

const int NUM = 8;

int main()
{
    int i = 10, j = 20;
    std::cout << "i, j = "<<i <<", " << j << std::endl;
    std::cout << "Using complier-generated int swapper: " << std::endl;
    swap(i, j);
    std::cout << "Now i, j = "<<i <<", " << j << std::endl;


    int d1[NUM] = {0, 7, 2, 0, 1, 9, 6, 9};
    int d2[NUM] = {0, 7, 0, 4, 1, 9, 7, 9};

    std::cout << "Original arrays: "<<std::endl;
    show(d1, NUM);
    show(d2, NUM);

    std::cout << "Swapped arrays:" << std::endl;
    swap(d1, d2, NUM);
    show(d1, NUM);
    show(d2, NUM);
    
    return 0;
}


template <typename T>
void swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}


template <typename T>
void swap(T* arr1, T* arr2, int n)
{
    T temp;
    for(int i = 0; i <n; i++)
    {
        temp = arr1[i];
        arr1[i]  = arr2[i];
        arr2[i] = temp;
    }
}


template <typename T>
void show(T* arr, int n)
{
    std::cout << arr[0] << arr[1] << "/";
    std::cout << arr[2] << arr[3] << "/";
    for(int i =4; i < n; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;

}
*/





/*
#include <iostream>
struct Job
{
    char name[40];
    double money;
    int floor;
};

template <typename T>
void swap(T& a, T& b);

template <> void swap<Job> (Job& j1, Job& j2);

void show(Job& j);

int main()
{
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    int i = 10, j =20;
    std::cout << "i , j = " << i << ", " << j << "."<<std::endl;
    std::cout << "Using compiler-generated int swapper:" << std::endl;
    swap(i,j);
    std::cout << "Now i , j = " << i << ", " << j << ". "<< std::endl;

    std::cout << "Before job swapping: "<<std::endl;
    Job j1 = {"Susan Yaffee", 73000.60, 7};
    Job j2 = {"Sidney Taffee", 78060.72, 9};

    show(j1);
    show(j2);

    swap(j1, j2);
    std::cout << "After job swapping:" <<std::endl;
    show(j1);
    show(j2);

    return 0;
}

template <typename T>
void swap(T& a, T& b)
{
    T temp;
    temp  = a;
    a = b;
    b = temp;
}


template<> void swap<Job> (Job& j1, Job& j2)
{
    double tempM;
    int tempF;

    tempM = j1.money;
    j1.money = j2.money;
    j2.money = tempM;

    tempF = j1.floor;
    j1.floor = j2.floor;
    j2.floor = tempF;
}

void show (Job& j)
{
    std::cout << j.name << ": $" << j.money<<" on floor "<< j.floor <<std::endl;
}
*/









/*
#include <iostream>
struct debts
{
    char name[50];
    double amount;
};

template <typename T>
void show(T arr[], int n);

template <typename T>
void show(T* arr[], int n);

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {{"Ima Wolfe", 2400.0},
                     {"Ura Foxe", 1300.0},
                     {"Iby Stout", 1800.0}};
    double* pt[3];
    for(int i = 0; i < 3; i++)
    {
        pt[i] = &mr_E[i].amount;
    }

    std::cout.precision(2);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout << "Listing Mr.E's counts of things: "<<std::endl;
    show(things, 6);
    std::cout << "Listing Mr.E's debts: "<<std::endl;
    show(pt,3);
    return 0;
}

template <typename T>
void show(T arr[], int n)
{
    std::cout << "template A" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void show(T* arr[], int n)
{
    std::cout << "template B" << std::endl;
    for(int i = 0 ; i < n; i++)
    {
        std::cout <<*arr[i] << " "; 
    }
    std::cout << std::endl;
}
*/







/*
1. 只有一行小型，非递归的代码
2.  a. void song(char* name, int times = 1);
    b. 没有
    c. void song (int times, char* name = "O. My Papa");

3. void iquote(int a)
    {
        std::cout << "\"" << a << "\"";
    }

    void iquote(double a )
    {
        std::cout << "\"" << a << "\"";
    }

    void iquote(string a)
    {
        std::cout << "\"" << a << "\"";
    }

4. a. void showStruct(box& b)
        {
            std::cout << "maker: " << b.maker<<std::endl;
            std::cout << "height: " << b.height << std::endl;
            std::cout << "width: " << b.width << std::endl;
            std::cout << "length: "<< b.length << std::endl;
            std::cout << "volume: "<< b.volume << std::endl;
        }

        void setVolume(box& b)
        {
            b.volume = b.height * b.width * b.length;
        }

5. a. 默认参数　
　 b.函数重载
   c.模板
   d.模板

6. template<typename T>
    T getMax(T a, T b)
    {
        return a>b?a:b;
    }


7. template <> T getMax<T>(T a, T b)
    {
        return a.length * a.height*a.width > b.length * b.height * b.width?a:b;
    }
*/












