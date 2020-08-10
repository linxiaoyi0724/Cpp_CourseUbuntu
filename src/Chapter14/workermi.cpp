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