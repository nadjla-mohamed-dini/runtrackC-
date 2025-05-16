//
// Created by nadjl on 15/05/2025.
//
#include <iostream>

int main () {
    int number = 2019;
    int* ptr = &number;

    std::cout<<"la valeur de number "<<*ptr<<std::endl;
    return 0;
}