//#include "stdafx.h"


/*
#include <iostream>
using namespace std;
void sample();
int main()
{
	cout << "main() will call the sample() function:" << endl;
	sample();
	return 0;
}

void sample()
{
	cout << "I'm but a simple function." << endl;
}
*/




/*
#include <iostream>
using namespace std;
void cheers(int);q'q
double cube(double);
int main()
{
	cheers(5);
	cout << "Give me a number: ";
	double n;
	cin >> n;
	double num = cube(n);
	cout << "A " << n << "-foot cube has a volume of " << num << "cubic feet." << endl;
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! ";
	}
	cout << endl;
}

double cube(double num)
{
	return num * num * num;
}
*/









/* 
#include <iostream>
using namespace std;
void nChar(char, int);
int main()
{
	cout << "Enter a character: ";
	char ch;
	int times;
	cin >> ch;
	while (ch!='q')
	{
		cout << "Enter a integer: ";
		cin >> times;
		nChar(ch, times);
		cout << "Enter another character or press q key to quit: ";
		cin >> ch;
	}
	cout << "The value of times is " << times << endl;
	cout << "Bye!" << endl;
	return 0;
}
void nChar(char ch, int n)
{
	while (n-->0)
	{
		cout << ch;
	}
	cout << endl;
}
*/






/* 
#include <iostream>
using namespace std;
long double probability(unsigned number, unsigned choice);
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter total number of choices on the game card and the number of picks allowed:";
	int number, choice;
	while(cin >> number>> choice && number >= choice)
	{
		long double prob = probability(number, choice);
		cout << "You have one chance in " << prob << " of winning."<<endl;
		cout << "Next two numbers (q to quit):"; 
	}
	cout << "bye" <<endl;
	return 0;
}
long double probability(unsigned number, unsigned choice)
{
	long double result = 1.0;
	long double n;
	int peak;
	for(n = number, peak = choice; peak > 0;n--, peak--)
	{
		result = result * n / peak;
	}
	return result;
}
*/




/* 
#include <iostream>
using namespace std;
const int arrSize = 8;
int arrTotal(int arr[], int n);
int main()
{
	int arr[arrSize] = {1,2,4,8,16,32,64,128};
	int sum = arrTotal(arr, arrSize);
	cout << "Total cookies eaten: " << sum << "\n";
	return 0;
}
int arrTotal(int arr[], int n)
{
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}
*/




/* 
#include <iostream>
using namespace std;
const int arrSize = 8;
int sum_arr(int arr[], int n);
int main()
{
 	int cookie[arrSize] = {1,2,4,8,16,32,64,128};
	cout << cookie << " = arrary address. "<<endl;
	cout << sizeof(cookie) << " = size of cookie." <<endl;
	int sum = sum_arr(cookie, arrSize);
	cout << "Total cookie eaten: " <<sum << endl;
	sum = sum_arr(cookie, 3);
	cout << "First three eaten : " << sum <<endl;
	sum = sum_arr(cookie+4,4);
	cout << "Last four eaten: "  << sum <<endl;
	return 0;
}

int sum_arr(int arr[],int n)
{
	int total = 0;
	cout << arr  << "== arr" <<endl;
	for(int i = 0; i < n; i++)
	{
		total += arr[i];
	} 
	return total;
}
*/






/*
#include <iostream>
using namespace std;
const int maxSize = 5;
int fillArray(double* arr, int limit);
void showArray(double* arr, int n);
void revalue(float r, double* arr, int n);
int main()
{
	double propertise[maxSize];
	int n = fillArray(propertise, maxSize);
	showArray(propertise,n);
	cout << "Enter reassessment rate: ";
	float r;
	cin >> r;
	revalue(r,propertise,n);
	cout << "Done"<<endl;
	return 0;
}

int fillArray(double* arr, int limit)
{
	double temp;
	int i;
	for(i = 0; i < limit; i++)
	{
		cout << "Enter value #1: ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
			{
				continue;
			}
			cout << "Bad input"<<endl;
			break;
		}
		else if(temp < 0)
		{
			break;
		}
		arr[i] = temp;
	}
	return i;
}

void showArray(double* arr, int n)
{
	for(int i = 0; i< n; i++)
	{
		cout << "Property #" << i<< ": $" << arr[i] <<endl;
	}
}

void revalue(float r, double* arr, int n)
{
	for(int i = 0; i< n; i++)
	{
		arr[i]*= r;
		cout << "Property #" << i<< ": $" << arr[i] <<endl;
	}
}

*/






/*
#include <iostream>
const int arSize = 8;
int sum_ar(const int* begin, const int* end);
int main()
{
    int cookie[arSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_ar(cookie,cookie+arSize);
    std::cout << "Total eaten cookie: " << sum << std::endl;
    sum = sum_ar(cookie, cookie+3);
    std::cout << "First Three eaten cookie: " << sum << std::endl;
    sum = sum_ar(cookie+4,cookie+8);
    std::cout << "Last Four eaten cookie: " << sum << std::endl;
    return 0;
}

int sum_ar(const int* begin, const int* end)
{
    const int* pt;
    int total =0;
    for(pt = begin; pt!= end; pt++)
    {
        total = total + *pt;
    }
    return  total;
}
*/






/*
#include <iostream>
int c_in_str(const char* str, char ch);
int main()
{
	char minimum[15] = "minimum";
	char* ululate = "ululate";
	int ms = c_in_str(minimum,'m');
	int us = c_in_str(ululate, 'u');
	std::cout << ms << " m characters in minimum"<<std::endl;
	std::cout << us << " u characters in ululate" << std::endl;
	return 0;
}

int c_in_str(const char* str, char ch)
{
	int count = 0;
	while(*str)
	{
		if(*str == ch)
		{
			count ++;
		}
		str++;
	}
	return count;
}
*/




/*
#include <iostream>
char* buildStr(char ch, int times);
int main()
{
    char ch;
    int times;
    std::cout << "Enter a characters: ";
    std::cin >> ch;
    std::cout << "Enter a integer: ";
    std::cin >> times;

    char* ch1 = buildStr(ch, times);
    std::cout << ch1 << std::endl;
    delete[] ch1;

    char* ch2 = buildStr('+', 20);
    std::cout << ch2 << "-DONE-" << ch2 << std::endl;
    delete[](ch2);

    return 0;
}

char* buildStr(char ch, int n)
{
    char * pStr = new char[n+1];
    pStr[n] = '\0';
    while (n-- > 0)
    {
        pStr[n] = ch;
    }
    return  pStr;
}
*/





/*
#include <iostream>
struct travelTime{
    int hour;
    int minute;
};
const int minToHr = 60;

travelTime timeSum(travelTime day1, travelTime day2);
void showTime(travelTime totalTime);

int main()
{
    travelTime day1 = {5, 45};
    travelTime day2 = {4,55};
    travelTime twoDayTotal = timeSum(day1, day2);
    std::cout << "Two-day total: ";
    showTime(twoDayTotal);

    travelTime day3 = {4, 32};
    travelTime threeDayTotal = timeSum(day3, twoDayTotal);
    std::cout << "Three-day total: ";
    showTime(threeDayTotal);
    return 0;
}

travelTime timeSum(travelTime day1, travelTime day2)
{
    travelTime timeTotal;
    timeTotal.minute = (day1.minute + day2.minute) % minToHr;
    timeTotal.hour = (day1.hour + day2.hour) + (day1.minute + day2.minute) / minToHr;
    return  timeTotal;
}

void showTime(travelTime timeTotal)
{
    std::cout << timeTotal.hour << " hours, " << timeTotal.minute << " minutes"<<std::endl;
}
*/







/*
#include <iostream>
#include <cmath>
const double  RadToDeg = 57.29577951;
struct rect{
    double x;
    double y;
};

struct polar{
    double dis;
    double deg;
};

polar recToPolar(rect rec);
void showPolar(polar pol);

int main()
{
    rect rec;
    polar pol;
    std::cout << "Enter the x and y values: ";
    while(std::cin >> rec.x >> rec.y)
    {
        pol = recToPolar(rec);
        showPolar(pol);
        std::cout << "Next two numbers (q to quit): ";
    }
    return 0;
}

polar recToPolar(rect rec)
{
    polar pol;
    pol.dis = sqrt(rec.x * rec.x + rec.y*rec.y);
    pol.deg = atan2(rec.y, rec.x) * RadToDeg;
    return  pol;
}

void showPolar(polar pol)
{
    std::cout<< "distance = " << pol.dis << ", angle = " << pol.deg << " degrees"<<std::endl;
}
*/







/*
#include <iostream>
#include <cmath>
const double RadToDeg = 57.29577951;
struct Rect
{
    double x;
    double y;
};
struct Polar
{
    double distance;
    double degree;
};

void rectToPolar(const Rect* rect, Polar* pol);
void showPolar(const Polar* pol);

int main()
{
    Rect rect;
    Polar pol;
    std::cout << "Enter the x and y values: ";
    while (std::cin>>rect.x>>rect.y)
    {
        rectToPolar(&rect, &pol);
        showPolar(&pol);
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout<<std::endl<<"Done"<<std::endl;
}

void rectToPolar(const Rect* rect, Polar* pol)
{
    pol->distance = sqrt(rect->x * rect->x + rect->y * rect->y);
    pol->degree = atan2(rect->y, rect->x) * RadToDeg;
}

void showPolar(const Polar* pol)
{
    std::cout << "distance = " << pol->distance << ", angle = " << pol->degree << " degrees"<<std::endl;
}
*/








/*
#include <iostream>
#include <string>
const int Size = 5;
void displayList(const std::string List[], const int Size);
int main()
{
    std::string  list[Size];
    std::cout << "Enter your " << Size << " favorite astronomical sights: " << std::endl;
    for(int i = 0; i < Size; i++)
    {
        std::cout << i+1 << ":";
        std::getline(std::cin, list[i]);

    }
    displayList(list, Size);
    return  0;
}
void displayList(const std::string List[], const int Size)
{
    for(int i = 0; i < Size; i++)
    {
        std::cout << i+1 << ": " << List[i] <<std::endl;
    }
}
 */








/*
#include <iostream>
void countDown(int n);
int main()
{
	int n = 4;
	countDown(n);
	return 0;
}
void countDown(int n)
{
	std::cout <<"Counting down ... " << n <<std::endl;
	if(n>0)
	{
		countDown(n-1);
	}
	std::cout << n << ": Kaboom!"<<std::endl;
}
*/







/*
#include <iostream>
const int dLevel = 6;
const int len = 66;
void subDivide(char sa[], int left, int right, int level);
int main()
{
    char sA[len];
    for(int i = 1; i < len-2;i++)
    {
        sA[i] = ' ';
    }

    int min = 0;
    int max = len-2;
    sA[len-1] = '\0';

    sA[min] = '|';
    sA[max] = '|';

    std::cout << sA << std::endl;

    for(int j = 1; j <= dLevel; j++)
    {
        subDivide(sA, min ,max, j);
        std::cout << sA << std::endl;

        for(int m = 1; m < max; m++)
        {
            sA[m] = ' ';
        }
    }

    return 0;

}

void subDivide(char sA[], int min, int max, int level)
{
    if(level == 0)
    {
        return;
    }
    int mid = (min + max) / 2;
    sA[mid] = '|';
    subDivide(sA, min ,mid, level-1);
    subDivide(sA, mid ,max, level-1);
}
*/






/*
#include <iostream>
double betsy(int line);
double pam(int line);
void estimate(int line, double (*pf)(int));
int main()
{
	int line;
	std::cout << "How many lines of code do you need?";
	std::cin >> line;
	std::cout << "Here's Betsy' estimate:"<<std::endl;
	estimate(line,betsy);
	std::cout << "Here's Pam's estimate:"<<std::endl;
	estimate(line, pam);
	return 0;
}

double betsy(int line)
{
	return 0.05 * line;
}

double pam(int line)
{
	return 0.03 * line + 0.0004 * line * line;
}

void estimate(int line, double (*pf)(int))
{
	std::cout << line << " lines will take " << (*pf)(line) << " hour(s)" << std::endl;
}
*/






/*
1. 声明函数， 调用函数， 实现函数
2. a. void igor();
   b. float tofu(int);
   c. double mpg(double, double);
   d. long summation(long a[], int len);
   e. double doctor(const char* ch);
   f. void ofcourse(boss b);
   g. string plot(map* m);

3.
void func(int a[], int len, int a)
{
    for(int i = 0; i < len; i++)
    {
        a[i] = a;
    }
}

4.
void func(const int* begin, const int* end, int value)
{
    int* a;
    for(a = begin; a != end; a++)
    {
        *a = value;
    }
}

5.
double getMaxValue(double a[], int len)
{
    double temp = a[0];
    for(int i = 1; i < len; i++)
    {
        if(a[i] >= temp)
        {
            temp = a[i];
        }
    }
}

6. const 限定符用于指针，以防止指向的原始数据被修改，程序传递的基本类型，它将按值传递

7. char* ch 指针类型字符串
   char ch[] 字符数组
   string str 字符串类型


8.
int replace (char* str, char c1, char c2)
{
    int count = 0;
    while(*str)
    {
        if(*str == c1)
        {
            *str = c2;
            count++;
        }
        str++;
    }
    return  count;
}


9.
*"pizza"的含义表示: "pizza" 字符串的第一个地址
"taco[2]" 表示 'c'


10.
void (glitz g)  // 按值传递
void (glitz* g) // 按地址传递

按值传递需要把实参拷贝给形参，加大计算量和内存使用

11.
int judge(int (*pf)(const char* ch));

*/




































































