//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    std::cout << "Enter the first number: ";std::cin>>a;
    std::cout << "Enter the second number: ";std::cin>>b;
    std::cout << "Enter the third number: ";std::cin>>c;
    if(a>b && a>c) {
        std::cout<< a;
    }else if(b>c && b>a) {
        std::cout<< b;
    }else if(c>a && c>b) {
        std::cout<< c;
    }
    return 0;
}