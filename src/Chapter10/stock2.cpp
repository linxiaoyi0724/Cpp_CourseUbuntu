#include <iostream>
#include <cstring>
#include "stock2.h"
using namespace std;

stock::stock()
{
    strcpy(company, "no name");
    share_val = 0.0;
    shars = 0;
    total();
}

stock::stock(char* co, int n, double price)
{
    strncpy(company,co,29);
    company[29] = '\0';
    shars = n;
    share_val = price;
    total();
}

void stock::buy(int num, double price)
{
    if(num < 0)
    {
        cerr<<"error"<<endl;
    }
    else
    {
        share_val = price;
        shars += num;
        total();
    }
}

void stock::sell(int num, double price)
{
    if(num < 0)
    {
        cerr<<"error"<<endl;
    }
    else if(num > shars)
    {
        cerr << "You can't sell more than you have!" <<endl;
    }
    else
    {
        share_val = price;
        shars -= num;
        total();
    }
}

void stock::update(double price)
{
    share_val = price;
    total();
}

void stock::show()const
{
    cout << "Company: "<<company << "   share: " << shars <<endl;
    cout << "Share Price: $" << share_val << "   Total Worth: $" << total_val <<endl; 
}

const stock& stock::topVal(const stock& s) const
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