//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int valeur;
    int somme = 0;
    for (int i = 1; i <= 5; i++) {
        std::cin >> valeur;
        somme = somme + valeur;
        somme+= valeur;
    }
    std::cout << "moyenne= " <<(double)somme/5 <<std::endl;
    return 0;
}