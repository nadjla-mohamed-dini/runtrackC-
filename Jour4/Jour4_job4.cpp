//
// Created by nadjl on 15/05/2025.
//
#include <iostream>


int main() {
    int a = 99;
    int b = 11;
    int c = 70;

    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;
    std::cout<<"valeur de depard: "<<std::endl;
    std::cout << *ptr1 << "\n";
    std::cout << *ptr2 << "\n";
    std::cout << *ptr3 << "\n";

    //modification des variables

    *ptr1 = 33;
    *ptr2 = 27;
    *ptr3 = 0;
    std::cout<<"valeur de modifier : "<<std::endl;
    std::cout << *ptr1 << "\n";
    std::cout << *ptr2 << "\n";
    std::cout << *ptr3 << "\n";

    return 0;


}
