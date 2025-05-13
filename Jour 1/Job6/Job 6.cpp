//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
int main() {
    int a;
    std::cout << "Enter a number : ";std::cin >>a;
    for (int b = 1; b <= 10; b++) {
        int result = a * b;
        std::cout<<a<<"*"<<b<<"="<<result<<std::endl;
    }
    return 0;
}