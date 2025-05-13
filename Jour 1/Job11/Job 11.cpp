//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int m;
    int n;

    std::cout << "Enter number for m: ";std::cin >> m;
    std::cout << "Enter number for n: ";std::cin >> n;
    std::cout << "Before exchange m : "<<m<< " and n = "<<n<<endl;

    int temp = n;
    n = m;
    m = temp;

    std::cout << "After exchange m: " <<m<< " and n = "<<n<<endl;
    return 0;
}