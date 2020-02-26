#ifndef STOCK2_H_
#define STOCK2_H_
#include <iostream>
#include <string>
class Stock
{
    private:
        std::string company;
        int shares;
        double share_val;
        double total_val;
        void total(){total_val = share_val * shares;}
    public:
        Stock();
        Stock(char* co, int n = 0, double price = 0.0);
        ~Stock(){};
        void buy(int num, double price);
        void sell(int num, double price);
        void update(double price);
        void show()const;
        const Stock& topVal(const Stock& s)const; 
};
#endif