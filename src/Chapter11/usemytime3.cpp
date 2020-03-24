#include "./mytime3.h"
#include <iostream>
int main()
{
    MT3::mytime3 alda(3,35);
    MT3::mytime3 tosca(2,48);
    MT3::mytime3 temp;

    std::cout << "Aida and Tosca: "<< std::endl;
    std::cout << alda << ";" << tosca << std::endl;
    temp = alda + tosca;
    std::cout << "Alda + Tosca = " << temp << std::endl;
    temp = alda*1.17;
    std::cout << "Alda*1.17:" << temp << std::endl;
    std::cout << "10 * Tosca: " << 10 * tosca << std::endl;
    return 0;
}