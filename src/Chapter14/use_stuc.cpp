// #include "Studentc.h"
// #include <iostream>
// using namespace std;

// const int puils = 3;
// const int quizzes = 5;

// void Set(Student& sa, int n);

// int main()
// {
//     Student ada[puils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
//     int i;

//     for(i = 0; i < puils; ++i)
//     {
//         Set(ada[i],quizzes);
//     }
//     cout << endl << "Student List: " <<endl;

//     for(int i = 0; i < puils; ++i)
//     {
//         cout << ada[i].Name() <<endl;
//     }
//     cout << endl << "Result: " <<endl;

//     for(int i = 0; i < puils; ++i)
//     {
//         cout <<endl <<ada[i];
//         cout << "Average: "<< ada[i].Average() <<endl;
//     }
//     cout <<"Done." <<endl;
//     return 0;
// }

// void Set(Student& sa, int n)
// {
//     cout << "Please enter Student's name: ";
//     getline(cin,sa);
//     cout << "Please enter " << n <<" quiz scores: " <<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cin >>sa[i];
//     }
//     while (cin.get()!='\n')
//     {
//         continue;
//     }
    
// }