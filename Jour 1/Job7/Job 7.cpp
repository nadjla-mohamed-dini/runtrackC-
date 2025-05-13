//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int a;
    std::cout << "Enter a number: ";std::cin >> a;
    if (a %2 == 0) {
        printf("number pair");
    }else{
        printf("number unpair");
    }
    return 0;
}