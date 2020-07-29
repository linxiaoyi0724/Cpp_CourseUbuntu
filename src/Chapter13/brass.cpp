
#include <iostream>
#include <cstring>
#include "brass.h"

using namespace std;

Brass::Brass(const char* s , long an, double be):acctNum(an),balance(be)
{
    strncpy(fullName,s,MAX-1);
    fullName[MAX-1] = '\0';
}

void Brass::Deposit(double amt)
{
    if(amt < 0)
    {
        cout << "Negative deposit not allowed: deposit is cancelled."<<endl;
    }
    else
    {
        balance += amt;
    }
}

void Brass::Withdraw(double amt)
{
    if(amt < 0)
    {
        cout << "Withdraw must be positive: " << " Withdraw cancelled."<<endl;
    
    }
    else if(amt < balance)
    {
        balance-=amt;
    }
    else
    {
        cout << "Withdraw amount of $ " << amt << "exceeds your balance. "<<endl << "Withdraw is cancelled." <<endl;
    }
}

double Brass::Balance()const
{
    return balance;
}

void Brass::ViewAcct()const
{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    cout.setf(initialState);
}


BrassPlus::BrassPlus(const char* s, long an, double bal,double ml,double r):Brass(s,an,bal),maxLoan(ml),rate(r)
{
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r):Brass(ba),maxLoan(ml),rate(r),owesBank(0.0)
{

}

void BrassPlus::Withdraw(double amt)
{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);

    double bal = Balance();
    if(amt < bal)
    {
        Brass::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt- bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance <<endl;
        cout << "Finance charge: $" << advance * rate <<endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        cout << "Credit limit exceeded. Transaction cancelled."<<endl;
    }
    
    cout.setf(initialState);
    
}


void BrassPlus::ViewAcct()const
{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);

    Brass::ViewAcct();
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank <<endl;
    cout << "Loan rate: " << 100 *rate << "%" <<endl;
    cout.setf(initialState);
}