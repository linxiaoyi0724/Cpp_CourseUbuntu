#include "Worker0.h"
#include <iostream>
using namespace std;
Worker::~Worker(){}

void Worker::Set()
{
	cout << "Enter worker's name:";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Worker::Show()const
{
	cout << "Name:" << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Waiter::Set()
{
	Worker::Set();
	cout << "Enter waiter's panache rating:";
	cin >> panache;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Waiter::Show()const
{
	cout << "Category: waiter: " << endl;
	Worker::Show();
	cout << " Paneche rating: " << panache << endl;
}

char* Signer::pv[] = { "other","alto","contralto","soprano","bass","baritone","tenor" };

void Signer::Set()
{
	Worker::Set();
	cout << "Enter number for signer's vocal range: " << endl;
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << " ";
		if (i % 4 == 3)
		{
			cout << endl;
		}
		if (i % 4 != 0)
		{
			cout << endl;
		}
		cin >> voice;
		while (cin.get()!='\n')
		{
			continue;
		}
	}
}

void Signer::Show()const
{
	cout << "Category: singer: " << endl;
	Worker::Show();
	cout << "vocal range: " << pv[voice] << endl;
}