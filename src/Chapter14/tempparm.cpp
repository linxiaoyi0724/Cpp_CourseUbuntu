// #include <iostream>
// #include "stacktp.h"

// template<template <typename T> class Thing>
// class Crab
// {
// private:
//     Thing<int> s1;
//     Thing<double> s2;

// public:
//     Crab(){}
//     bool push(int a, double x){return s1.Push(a) && s2.Push(x);}
//     bool pop(int& a, double& x){return s1.Pop(a) && s2.Pop(x);}
// };

// int main()
// {
//     using namespace std;
//     Crab<Stack> nebela;
//     int n1;
//     double nb;
//     cout << "Enter double pairs, such as 4 3.5(0 0 to be end): "<<endl;
//     while (cin >> n1 >> nb && n1 > 0 && nb >0)
//     {
//         if(!nebela.push(n1,nb))
//             break;
//     }
//     while (nebela.pop(n1, nb))
//     {
//         cout << n1 << ", " << nb <<endl;
//     }
//     cout << "Done." <<endl;
//     return 0;
// }