
#include <iostream>
#include <cstring>
#include "stock2.h"
using namespace std;

Stock::Stock()
{
    //strcpy(company, "no name");
    company = "no name";
    share_val = 0.0;
    shares = 0;
    total();
}

Stock::Stock(char* co, int n, double price)
{
    //strncpy(company,co,29);
    company = co;
    company[29] = '\0';
    shares = n;
    share_val = price;
    total();
}

void Stock::buy(int num, double price)
{
    if(num < 0)
    {
        cerr<<"error"<<endl;
    }
    else
    {
        share_val = price;
        shares += num;
        total();
    }
}

void Stock::sell(int num, double price)
{
    if(num < 0)
    {
        cerr<<"error"<<endl;
    }
    else if(num > shares)
    {
        cerr << "You can't sell more than you have!" <<endl;
    }
    else
    {
        share_val = price;
        shares -= num;
        total();
    }
}

void Stock::update(double price)
{
    share_val = price;
    total();
}

void Stock::show()const
{
    cout << "Company: "<<company << "   share: " << shares <<endl;
    cout << "Share Price: $" << share_val << "   Total Worth: $" << total_val <<endl; 
}

const Stock& Stock::topVal(const Stock& s) const
{
    if(total_val > s.total_val)
    {
        return *this;
    }
    else
    {
        return s;
    }
}