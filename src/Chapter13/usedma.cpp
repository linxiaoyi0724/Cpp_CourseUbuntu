#include <iostream>
#include "dma.h"
int main()
{
    using namespace std;

    baseDMA shirt("Portabelly",8);
    lacksDMA balloon("red", "Bolimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << shirt <<endl;
    cout << balloon <<endl;
    cout << map <<endl;
    lacksDMA balloon2(balloon);
    hasDMA map2;
    map2 = map;
    cout << balloon2 <<endl;
    cout << map2 <<endl;
    return 0;
}