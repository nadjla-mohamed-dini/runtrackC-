//
// Created by nadjl on 15/05/2025.
//
#include <iostream>

int main() {
    int number1 = 11;
    int number2 = 42;
    int* ptr1 = &number1;
    int* ptr2 = &number2;

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    std::cout<<"number1: "<<*ptr1<<std::endl;
    std::cout<<"number2: "<<*ptr2<<std::endl;

    return 0;
}