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
void cheers(int);
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
