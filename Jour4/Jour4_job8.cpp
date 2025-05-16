//
// Created by nadjl on 15/05/2025.
//
#include<iostream>
#include<string>
#include <variant>
#include<vector>

using namespace std;

int main() {
    vector<variant<int,string,double>> tableau = {
    2019,
    "La PLateforme",
    3.14,
    "Etudiant"};

    for (size_t i = 0; i < tableau.size(); ++i) {
        cout<<"Valeur du tableau: [" << i << "] = ";

        visit ([](const auto& val) {
            cout<<val;
        }, tableau[i]);

        cout<<"  adresse = "<<&tableau[i]<<endl;
    }
    return 0;
}