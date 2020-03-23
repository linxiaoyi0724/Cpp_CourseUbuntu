#ifndef MYTIME_H_
#define MYTIME_H_

namespace ME
{
    class mytime0
    {
    public:
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
    };

    mytime0 operator-(const mytime0& t1, const mytime0& t2);
}

#endif