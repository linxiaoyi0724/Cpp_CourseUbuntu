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




















