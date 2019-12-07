/*
#include <iostream>
void oil(int temp);
int main()
{
    int texas = 31;
    int year = 1999;
    std::cout << "In main(), texas = " << texas << ",&teaxs = " << &texas << std::endl;
    std::cout << "In main(), year = " << year << ",&year = " << &year << std::endl;
    oil(texas);
    std::cout << "In main(), texas = " << texas << ",&teaxs = " << &texas << std::endl;
    std::cout << "In main(), year = " << year << ",&year = " << &year << std::endl;
    return 0;
}

void oil(int x)
{
    int texas = 5;
    std::cout << "In oil(), texas = " << texas << ",&texas = " << &texas << std::endl;
    std::cout << "In oil(), x = " << x << ",&x = " << &x << std::endl;
    {
        int texas = 113;
        std::cout << "In block, texas = " << texas << ",&texas = " << &texas << std::endl;
        std::cout << "In block, x = " << x << ",&x = " << &x << std::endl;
    }
    std::cout << "Post-block texas = " << texas << ",&texas = "<< &texas<<std::endl;
}
*/






/*
#include <iostream>
double warm = 0.3;
void update(double dt);
void local();
int main()
{
    std::cout << "Gbobal warming is " << warm << " degrees." << std::endl;
    update(0.1);
    std::cout << "Gbobal warming is " << warm << " degrees." << std::endl;
    local();
    std::cout << "Gbobal warming is " << warm << " degrees." << std::endl;
}

void update(double dt)
{
    extern double warm;
    warm += dt;
    std::cout << "Updating global warming to " << warm << " degrees." << std::endl;
}

void local()
{
    double warm = 0.8;
    std::cout << "Loal warming = " << warm << " degrees." <<std::endl;
    std::cout << "But global warming = " << ::warm << " degrees. " << std::endl;
}
*/







/*
#include <iostream>
const int strSize = 10;
void strCount(const char* str);

int main()
{
    char input[strSize];
    char next;
    std::cout << "Enter a line: " << std::endl;
    std::cin.get(input, strSize);
    while (std::cin)
    {
        std::cin.get(next);
        if(next != '\n')
        {
            std::cin.get(next);
        }
        strCount(input);
        std::cout << "Enter next line (empty line to quit):" << std::endl;
        std::cin.get(input,strSize);
    }
    std::cout << "Bye"<<std::endl;
}

void strCount(const char* str)
{
    static int total = 0;
    int count = 0;
    std::cout << "\"" <<str<<"\" contains ";
    while (*str++)
    {
        count++;
    }
    std::cout << count << " characters" << std::endl;
    total += count;
    std::cout << total << " characters total" <<std::endl;
}
*/





/*
#include <iostream>
#include <new>

const int BUF =512;
const int N = 5;
char buffer[BUF];

int main()
{
    double *p1, *p2;
    p1 = new double[N];
    p2 = new (buffer) double[N];
    std::cout << "Callinf new and placement new: " << std::endl;
    std::cout << "Buffer addresses:";
    std::cout << "    heap: " << p1 << "   static:" << (void* )buffer << std::endl;
    for(int i = 0; i < N; i++)
    {
        p1[i] = p2[i] = 1000 + 20 *i;
    }
    std::cout << "Buffer contents:"<<std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << p1[i] << " at " << &p1[i] << "; " <<p2[i] << " at " << &p2[i] << std::endl;
    }


    double *p3, *p4;
    p3 = new double[N];
    p4 = new (buffer) double[N];
        for(int i = 0; i < N; i++)
    {
        p3[i] = p4[i] = 1000 + 20 *i;
    }
    std::cout << "Buffer contents:"<<std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << p3[i] << " at " << &p3[i] << "; " <<p4[i] << " at " << &p4[i] << std::endl;
    }

    delete[] p1;
    p1 = new double[N];
    p2 = new (buffer + N * sizeof(double)) double[N];
        for(int i = 0; i < N; i++)
    {
        p1[i] = p2[i] = 1000 + 20 *i;
    }
    std::cout << "Buffer contents:"<<std::endl;
    for(int i = 0; i < N; i++)
    {
        std::cout << p1[i] << " at " << &p1[i] << "; " <<p2[i] << " at " << &p2[i] << std::endl;
    }

    delete[] p1;
    delete[] p3;
    return 0;
}
*/