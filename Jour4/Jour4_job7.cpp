//
// Created by nadjl on 15/05/2025.
//
#include<iostream>

int main() {
    int tableau [10] ={11,31,42,99,5,9,77,1,0,66};
    int taille = sizeof(tableau)/sizeof(tableau[0]);

    for (int i=0; i<taille; i++) {
        std::cout <<"Valeur du tableau: [" << i << "] = "<<tableau[i]
        <<", Adresse = "<<&tableau[i]<<std::endl;
    }
    return 0;

}
