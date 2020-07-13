#include <cstring>
#include "string1.h"
using std::cin;
using std::cout;

int Str::num_strings = 0;

int Str::HowMany()
{
    return num_strings;
}

Str::Str(const char* ch)
{
    len = std::strlen(ch);
    str = new char[len+1];
    std::strcpy(str, ch);
    num_strings++;
}

Str::Str()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}


Str::Str(const Str& st)
{
    num_strings++;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
}


Str::~Str()
{
    --num_strings;
    delete[] str;
}

Str& Str::operator=(const Str& st)
{
    if(this == &st)
    {
        return *this;
    }

    delete[] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}

Str& Str::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str,s);
    return *this;
}

char& Str::operator[](int i)
{
    return str[i];
}

const char& Str::operator[](int i)const
{
    return str[i];
}

bool operator<(const Str& st1, const Str& st2)
{
    return(std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const Str& st1, const Str& st2)
{
    return st1.str < st2.str;
}

bool operator==(const Str& st1, const Str& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const Str& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream& is, Str& st)
{
    char temp[Str::CINLIM];
    is.get(temp,Str::CINLIM);
    if(is)
    {
        st = temp;
    }
    while (is && is.get()!= '\n')
    {
        continue;
    }
    return is;
}