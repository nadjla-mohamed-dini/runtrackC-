//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int a;
    std::cout << "Enter a year: ";std::cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || (a%400==0)) {
        std::cout<<("année bissextile");
    }else{
        std::cout<<("année non bissextile");
        return 0;

    }
}
