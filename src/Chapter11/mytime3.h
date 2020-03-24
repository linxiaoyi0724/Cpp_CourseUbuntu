#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>
namespace MT3
{
    class mytime3
    {
    private:
        int hours;
        int minutes;
    public:
        mytime3();
        mytime3(int h, int m = 0);
        ~mytime3();
        void AddMin(int m);
        void AddHor(int h);
        void Reset(int h = 0, int m = 0);
        mytime3 operator+(const mytime3& t)const;
        mytime3 operator-(const mytime3& t)const;
        mytime3 operator*(double m)const;
        friend mytime3 operator*(double m, const mytime3& t)
        {
            return t*m;
        }
        friend std::ostream& operator<<(std::ostream& os, const mytime3& t);
    };

} // namespace MT3


#endif