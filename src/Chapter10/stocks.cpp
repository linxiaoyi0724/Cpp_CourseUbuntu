/*
#include <iostream>
#include <cstring>
class Stock
{
    private:
        char company[30];
        int shares;
        double share_val;
        double total_val;
        void set_tot(){total_val = share_val * shares;}

    public:
        void acquire(const char* co, int n, double pr);
        void buy(int num, double price);
        void sell(int num, double price);
        void update(double price);
        void show();
};

void Stock::acquire(const char* co, int n, double pr)
{
    std::strncpy(company, co, 29);
    company[29] = '\0';
    if(n < 0 )
    {
        std::cerr << "Number of shares can't be negative" << company << " shares set to 0" << std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(int num, double price)
{
    if(num < 0)
    {
        std::cerr<<"Number of shares can't be negative , Transcation is aborted." << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(int num, double price)
{
    if(num < 0)
    {
        std::cerr<<"Number of shares can't be negative , Transcation is aborted." << std::endl;
    }
    else if(num > shares)
    {
        std::cerr<< "You can't sell more than you have, Transcation is aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    cout << "Company: " << company << " ,Shares: " << shares << " ,Share price: $" << share_val << endl;
    cout << "Total price:$ " << total_val<<endl;
}


int main()
{
    using namespace std;
    Stock stock1;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    stock1.acquire("xiaoyi", 20, 12.5);
    stock1.show();
    stock1.buy(15, 18.25);
    stock1.show();
    stock1.sell(400,20);
    stock1.show();
    return 0;
}
*/