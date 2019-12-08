/*
#include <iostream>
#include "namesp.h"
void other(void);
void another(void);
int main()
{
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}

void other()
{
    using std::cout;
    using std::cin;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    Debt zippy[3];
    for(int i =0; i < 3; i++)
    {
        getDebt(zippy[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy,3) << std::endl;
    return;
}

void another()
{
    using pers::Person;
    Person collector = { "Milo", "Rightshift"};
    pers::showPerson(collector);
}
*/