/*
#include <iostream>
#include "./brass.h"
using namespace std;
const int CLIENTS = 4;
const int LEN = 40;
int main()
{
	Brass* p_clients[CLIENTS];

	int i;
	for (i = 0; i < CLIENTS; i++)
	{
		char temp[LEN];
		long tempnum;
		double tempbal;
		char kind;
		cout << "Enter client's name:";
		cin.getline(temp, LEN);

		cout << "Enter client's account:";
		cin >> tempnum;

		cout << "Enter openning balance:";
		cin >> tempbal;

		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account:";
		while (cin>>kind && (kind != '1' && kind != '2'))
		{
			cout << "Enter 1 or 2";
		}

		if (kind == '1')
		{
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		}
		else
		{
			double tmax, trate;
			cout << "Enter the overdraft limit: $";
			cin >> tmax;
			cout << "Enter the trate";
			cin >> trate;

			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get()!='\n')
		{
			continue;
		}
	}

	cout << endl;
	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}

	for (int i = 0; i < CLIENTS; i++)
	{
		delete p_clients[i];
	}

	cout << "Done." << endl;
	return 0;
}
*/