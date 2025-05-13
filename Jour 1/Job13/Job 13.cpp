//
// Created by nadjl on 13/05/2025.
//
#include<iostream>

using namespace std;


int main() {
    int n;
    int somme =0;
    std::cin >> n;
    for (int i = 5; i<=n; i++){
        somme+=i*i*i;
        std::cout<<"la somme des cubes de 5^3 à"<<n<< "^3 est: "<<somme<<endl;
    }
    return 0;
}