#include <cstring>
#include "stringbad.h"
using namespace std;

int StringBad::num_strings = 0;


StringBad::StringBad(const char* s)
{
    len = std::strlen(s);
    str = new char[len +1];
    std::strcpy(str,s);
    num_strings++;
    cout << num_strings << ":\"" <<str << "\" object created"<<endl; 
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ":\"" << str << "\" default object created" << endl;
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted,";
    num_strings--;
    cout << num_strings << " left"<<endl;
    delete[] str;
}

std::ostream& operator<< (std::ostream& os, const StringBad& st)
{
    os << st.str;
    return os;
}