//
// Created by nadjl on 15/05/2025.
//
#include <string>
#include<iostream>
using namespace std;

int main () {
    int a = 17;
    float b = 3.14;
    double c = 123.345;
    string d = "La Plateforme";

    int* ptr = &a;
    float* ptr2 = &b;
    double* ptr3 = &c;
    string* ptr4 = &d;

    std::cout<<"adresse memoire"<<std::endl;
    std::cout<<ptr<<"\n";
    std::cout<<ptr2<<"\n";
    std::cout<<ptr3<<"\n";
    std::cout<<ptr4<<"\n";

    std::cout<<"variable et leur valeur"<<std::endl;
    std::cout<<"a: "<<*ptr<<std::endl;
    std::cout<<"b: "<<*ptr2<<std::endl;
    std::cout<<"c: "<<*ptr3<<std::endl;
    std::cout<<"d: "<<*ptr4<<std::endl;

    return 0;


}