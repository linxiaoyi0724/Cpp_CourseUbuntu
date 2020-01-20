#ifndef STOCK1_H_
#define STOCK1_H_

#include <iostream>
class stock1
{
private:
    char company[30];
    int shares;
    double share_val;
    double total_val;
    void set_toatl() {total_val = share_val * shares;}
public:
    stock1();
    stock1(const char* co, int n = 0, double pr = 0);
    ~stock1();
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show();
};

#endif
