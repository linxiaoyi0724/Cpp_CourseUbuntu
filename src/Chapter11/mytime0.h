#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
namespace ME
{
    class mytime0
    {
    private:
        int hours;
        int minutes;
    public:
        mytime0();
        mytime0(int h, int m);
        void AddHr(int h);
        void AddMin(int m);
        void Reset(int h = 0, int m = 0);
        mytime0 Sum(const mytime0& t)const;
        mytime0 operator+(const mytime0& t)const;
        void Show()const;
        ~mytime0();

        friend mytime0 operator*(double m, const mytime0& t);
        friend mytime0 operator-(const mytime0& t1, const mytime0& t2);
        friend void operator<<(std::ostream& os, const mytime0& t);
        
    };
}

#endif