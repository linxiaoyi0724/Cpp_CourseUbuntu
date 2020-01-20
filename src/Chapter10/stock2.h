#ifndef STOCK2_H_
#define STOCK2_H_
#include <iostream>
class stock
{
    private:
        char company[30];
        int shars;
        double share_val;
        double total_val;
        void total(){total_val = share_val * shars;}
    public:
        stock();
        stock(char* co, int n = 0, double price = 0.0);
        ~stock(){};
        void buy(int num, double price);
        void sell(int num, double price);
        void update(double price);
        void show()const;
        const stock& topVal(const stock &s)const; 
};
#endif