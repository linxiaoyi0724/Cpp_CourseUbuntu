#include "./mytime3.h"
namespace MT3
{
    mytime3::mytime3():hours(0),minutes(0)
    {

    }

    mytime3::mytime3(int h, int m):hours(h),minutes(m)
    {

    }

    mytime3::~mytime3()
    {
        std::cout << "Mytime3 class is closed. " << std::endl;
    }

    void mytime3::AddHor(int h)
    {
        hours += h;
    }

    void mytime3::AddMin(int m)
    {
        hours += (minutes+m)/ 60;
        minutes = (minutes + m) %60;
    }

    void mytime3::Reset(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    mytime3 mytime3::operator+(const mytime3& t)const
    {
        mytime3 sum;
        sum.hours = this->hours + t.hours + (this->minutes + t.minutes) / 60;
        sum.minutes = (this->minutes + t.minutes) % 60;
        return sum;
    }

    mytime3 mytime3::operator-(const mytime3& t)const
    {
        mytime3 sub;
        int minT1 = this->hours * 60 + this->minutes;
        int minT2 = t.hours * 60 + t.minutes;
        sub.hours = (minT1 - minT2) / 60;
        sub.minutes = (minT1 - minT2) % 60;
        return sub;
    }

    mytime3 mytime3::operator*(double m)const
    {
        mytime3 mul;
        int totalMin = this->hours * m * 60 + this->minutes * m;
        mul.hours = totalMin / 60;
        mul.minutes = totalMin % 60;
        return mul;
    }

    std::ostream& operator<<(std::ostream& os, const mytime3& t)
    {
        os << t.hours << " hour." << t.minutes << " minutes";
        return os;
    }
}