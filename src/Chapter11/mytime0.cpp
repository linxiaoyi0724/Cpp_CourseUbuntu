#include "./mytime0.h"
#include <iostream>
namespace ME
{
    mytime0::mytime0():hours(0),minutes(0)
    {

    }

    mytime0::mytime0(int h, int m):hours(h), minutes(m)
    {

    }

    mytime0::~mytime0()
    {
        std::cout << "class mytime0 is closed!" << std::endl;
    }

    void mytime0::AddHr(int h)
    {
        hours += h;
    }

    void mytime0::AddMin(int m)
    {
        minutes += m;
        hours += minutes / 60;
        minutes %= 60;
    }

    void mytime0::Reset(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    mytime0 mytime0::Sum(const mytime0& t) const
    {
        mytime0 sum;
        sum.hours += this->hours + t.hours + (this->minutes + t.minutes) / 60;
        sum.minutes = (this->minutes + t.minutes) % 60;
        return sum;
    }

    mytime0 mytime0::operator+(const mytime0& t)const
    {
        mytime0 sum;
        sum.minutes = this->minutes + t.minutes;
        sum.hours = this->hours + t.hours + sum.minutes /60;
        sum.minutes = sum.minutes % 60;
        return sum;
    }

    void mytime0::Show()const
    {
        std::cout << hours << " hours." << minutes << " minutes";
    }

    mytime0 operator*(double m,const mytime0& t)
    {
        mytime0 mul;
        int min = m * t.hours * 60 + m * t.minutes;
        mul.hours = min /60;
        mul.minutes = min % 60;
        return mul;
    }

    mytime0 operator-(const mytime0& t1, const mytime0& t2)
    {
        mytime0 sub;
        int mint1 = t1.hours*60 + t1.minutes;
        int mint2 = t2.hours*60 + t2.minutes;
        sub.hours = (mint1 - mint2) / 60;
        sub.minutes = (mint1 - mint2) % 60;
        return sub;
    }

    void operator<<(std::ostream& os, const mytime0& t)
    {
        os << t.hours << " hours. " << t.minutes << " minutes";
    }
}