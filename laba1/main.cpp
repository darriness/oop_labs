#include <iostream>
#include "function.h"

int main(){
    unsigned int devider, bound;
    std::cout<<"enter the devider: ";
    std::cin >> devider;
    std::cout<<"enter the bound: ";
    std::cin >> bound;

    std::cout << "result: " << find_num(devider, bound) << std::endl;

    return 0;
}