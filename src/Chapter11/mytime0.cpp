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

    mytime0 operator-(const mytime0& t1, const mytime0& t2)
    {
        int total1 = t1.minutes + t1.hours * 60;
        int total2 = t2.minutes + t2.hours*60;
        int h = (total2 - total1) /60;
        int m = (total2 - total1) % 60;
        mytime0 sub(h,m);
        return sub;

    }

    void mytime0::Show()const
    {
        std::cout << hours << " hours." << minutes << " minutes";
    }

    
}