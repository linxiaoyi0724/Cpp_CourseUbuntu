// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "stackp1.h"
// const int Num = 10;
// int main()
// {
//     std::srand(std::time(0));
//     std::cout << "Please enter stack size: ";
//     int stacksize;
//     std::cin >>stacksize;
//     Stackp<const char* > st(stacksize);

//     const char* in[Num] = {"1: xiaoyi", "2:meizhen", "3:xiaolin", "4:xiaoke"
//     ,"5:xiaowu", "6:xiaoliu", "7:xiaomeng", "8:xiaoqiong", "9:xiaohuang", "10:xiaonv"};

//     const char* out[Num];

//     int processed = 0;
//     int nextin = 0;
//     while (processed < Num)
//     {
//         if(st.IsEmpty())
//         {
//             st.Push(in[nextin]++);
//         }
//         else if(st.IsFull())
//         {
//             st.Pop(out[processed++]);
//         }
//         else if(std::rand()%2 && nextin < Num)
//         {
//             st.Push(in[nextin++]);
//         }
//         else
//         {
//             st.Pop(out[processed++]);
//         }
//     }
//     for(int i = 0; i < Num; i++)
//     {
//         std::cout <<out[i] <<std::endl;
//     }
//     std::cout << "Bye!" <<std::endl;
//     return 0;
// }