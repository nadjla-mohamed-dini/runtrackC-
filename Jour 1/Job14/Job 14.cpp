//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int n;
    int reverse_number = 0;
    std::cin >> n;
    reverse_number = reverse_number * 10;
    while (n!=0) {
        reverse_number = reverse_number + n%10;
        n = n / 10;
    }

    cout<<"reverse number: "<<reverse_number;
    return 0;
}