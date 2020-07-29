#include <iostream>
#include <cstring>
#include "acctabc.h"
using namespace std;

AcctABC::AcctABC(const char* s, long an, double bal):acctNum(an),balance(bal)
{
    std::strncpy(fullname,s,MAX-1);
    fullname[MAX -1] = '\0';
}

void AcctABC::Deposit(double amt)
{
    if(amt < 0)
    {
        cout << "Negative deposit not alloed" <<endl;
    }
    else
    {
        balance += amt;
    }
}

void AcctABC::Withdraw(double amt)
{
    balance -= amt;
}

ios_base::fmtflags AcctABC::SetFormat()const
{
    ios_base::fmtflags initialState  = cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    return initialState;
}


void Brass::Withdraw(double amt)
{
    if(amt < 0)
    {
        cout << "Withdraw amount must be positive;" <<endl;
    }
    else if( amt <= Balance())
    {
        AcctABC::Withdraw(amt);
    }
    else
    {
        cout <<"Withdraw canceled."<<endl;
    }
}

void Brass::ViewAcct()const
{
    ios_base::fmtflags initSta = SetFormat();
    cout << "Brass Client: " << FullName() <<endl;
    cout << "Account Number: " << AcctNum() <<endl;
    cout << "Balance:$ " << Balance() <<endl;
    cout.setf(initSta);
}


BrassPlus::BrassPlus(const char* s, long an, double bal, double ml, double r):AcctABC(s,an,bal),maxLoan(ml),rate(r),owesBank(0.0)
{

}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r):AcctABC(ba),maxLoan(ml),rate(r),owesBank(0.0)
{

}

void BrassPlus::ViewAcct()const
{
    ios_base::fmtflags initSta = SetFormat();
    cout << "BrassPlus Client: "<< FullName()<<endl;
    cout << "Account Number: " << AcctNum() <<endl;
    cout << "Balance: $" << Balance() <<endl;
    cout << "Maximum loan: $" << maxLoan <<endl;
    cout << "Owed to bank: $" <<owesBank <<endl;
    cout << "Loan Rate: " << 100 * rate << "%" << endl;
    cout.setf(initSta);
}

void BrassPlus::Withdraw(double amt)
{
    ios_base::fmtflags initSta = SetFormat();
    double bal = Balance();
    if(amt <= bal)
    {
        AcctABC::Withdraw(amt);
    }
    else if(amt <= bal + maxLoan -owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 +rate);
        cout << "Bank advance: $ " <<advance <<endl;
        cout << "Finance charge: $" <<advance * rate <<endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
    {
        cout << "cancelled" <<endl;
    }
    cout.setf(initSta);
}