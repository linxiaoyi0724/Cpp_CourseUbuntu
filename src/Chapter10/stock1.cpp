#include <iostream>
#include <cstring>
#include "stock1.h"

using std::cout;
using std::endl;
using std::cerr;

stock1::stock1()
{
    cout << "Default constructor called" <<endl;
    strcpy(company, "no name");
    shares = 0;
    share_val = 0;
    total_val = 0;
}

stock1::stock1(const char* co, int n, double pr)
{
    cout << "Constructor using " << co << " called" <<endl;
    strncpy(company, co, 29);
    company[29] = '\0';
    if(n < 0)
    {
        cerr<<"Number of shares can't be negative;" << company << " shares set to 0" <<endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_toatl();
}

stock1::~stock1()
{
    cout << "Bye, " << company << "!" <<endl;
}

void stock1::buy(int n, double price)
{
    if(n < 0)
    {
        cerr<< "Number of shares purchased can't be negative. Transaction is abort."<<endl; 
    }
    else
    {
        shares += n;
        share_val = price;
        set_toatl();
    }
}

void stock1::sell(int num, double price)
{
    if(num < 0)
    {
        cerr << "Number of shares sold can't be negative. Transaction is aborted! " << endl;
    }
    else if (num > shares)
    {
        cerr << "You can't sell more than you have! Transaction is aborted! " <<endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_toatl();
    }    
}


void stock1::update(double price)
{
    share_val = price;
    set_toatl();
}


void stock1::show()
{
    cout << "Company: " << company << "   Shares: "<< shares << "   Share_price: " << share_val << "   Total Worth: " << total_val <<endl;
}