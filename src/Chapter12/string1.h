#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class Str
{
    private:
        char* str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;

    public:
        Str(const char* s);
        Str();
        Str(const Str&);
        ~Str();
        int length()const {return len;}

        Str& operator= (const Str&);
        Str& operator= (const char*);
        char& operator[](int i);
        const char& operator[](int i)const;

        friend bool operator<(const Str& st1, const Str& st2);
        friend bool operator>(const Str& st1, const Str& st2);
        friend bool operator==(const Str& st1, const Str& st2);

        friend ostream& operator<<(ostream& os, const Str& st);
        friend istream& operator>>(istream& is, Str& st);

        static int HowMany();
};

#endif 
