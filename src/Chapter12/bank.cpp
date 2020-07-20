//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "queue.h"
//
//const int MIN_PER_HR = 60;
//
//bool newcustomer(double x);
//
//int main()
//{
//	using std::cin;
//	using std::cout;
//	using std::endl;
//	using std::ios_base;
//	std::srand(std::time(0));
//
//	cout << "Case Study: Bank of Heather Automatic Teller: " << endl;
//	cout << "Enter maxinum size of queue:";
//	int qs;
//	cin >> qs;
//	Queue line(qs);
//
//	cout << "Enter the number of simulation hours: ";
//	int hours;
//	cin >> hours;
//
//	long cycleimit = MIN_PER_HR * hours;
//
//	cout << "Enter the avergae number of customers per hour:";
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;
//
//	Item temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	int wait_time = 0;
//	long line_wait = 0;
//
//
//	for (int cycle = 0; cycle < cycleimit; cycle++)
//	{
//		if (newcustomer(min_per_cust))
//		{
//			if (line.IsFull())
//			{
//				turnaways++;
//			}
//			else
//			{
//				customers++;
//				temp.set(cycle);
//				line.EnQueue(temp);
//			}
//
//			if (wait_time <= 0 && !line.IsEmpty())
//			{
//				line.DeQueue(temp);
//				wait_time = temp.ptime();
//				line_wait += cycle - temp.when();
//				served++;
//			}
//			else
//			{
//				wait_time--;
//			}
//			sum_line += line.QueueCount();
//		}
//	}
//
//
//	if (customers > 0)
//	{
//		cout << "customers accepted: " << customers << endl;
//		cout << "customers served: " << served << endl;
//		cout << "trunaways: " << turnaways << endl;
//		cout << "average queue size: ";
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout.setf(ios_base::showpoint);
//		cout << (double)sum_line / cycleimit << endl;
//		cout << "average wait time: " << (double)line_wait / served << " minutes" << endl;
//		
//	}
//	else
//	{
//		cout << "No customers!" << endl;
//		
//	}
//	cout << "Done!" << endl;
//	return 0;
//}
//
//bool newcustomer(double x)
//{
//	return (std::rand() * x / RAND_MAX < 1);
//}
