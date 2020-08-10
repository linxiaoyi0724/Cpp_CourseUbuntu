#include "workermi.h"
#include <iostream>

using namespace std;
WokrerMi::~WokrerMi()
{

}

void WokrerMi::Data()const
{
    cout << "fullname: " << fullname<<endl;
    cout << "id: "<< id<<endl;
}

void WokrerMi::Get()
{
    getline(cin,fullname);
    cout << "Enter your id: ";
    cin >>id;
    while (cin.get()!='\n')
    {
        continue;
    }
}

void WaiterMi::Set()
{
    cout << "Enter waiter's name: ";
    WokrerMi::Get();
    Get();
}

void WaiterMi::Show()const
{
    cout << "Category: waiter:"<<endl;
    WokrerMi::Data();
    Data();
}

void WaiterMi::Data()const
{
    cout << "Pnanche rating : " << panache <<endl;
}

void WaiterMi::Get()
{
    cout << "Enter waiter's paneche rating: ";
    cin >>panache;
    while (cin.get()!='\n')
    {
        continue;
    }
}

char* SignerMi::pv[SignerMi::Vtypes] = {"other", "alto","contralto","soperano","bass","baritone","tenor"};

void SignerMi::Set()
{
    cout << "Enter signer's name: ";
    WokrerMi::Get();
    Get();
}

void SignerMi::Show()const
{
    cout << "Category: singer: "<<endl;
    WokrerMi::Data();
    Data();
}

void SignerMi::Data()const
{
	cout << "Vocal range: " << pv[voice] << endl;
}

void SignerMi::Get()
{
	cout << "Enter number for signer's local range: " << endl;
	int i;
	for (i = 0; i < Vtypes; ++i)
	{
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
		{
			cout << endl;
		}
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

void SignerWaiter::Data()const
{
	SignerMi::Data();
	WaiterMi::Data();
}

void SignerWaiter::Get()
{
	WaiterMi::Get();
	SignerMi::Get();
}

void SignerWaiter::Set()
{

}