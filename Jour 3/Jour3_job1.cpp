//
// Created by nadjl on 14/05/2025.
//
#include<cctype>
#include<string>
#include <iostream>

using namespace std;

int main() {
    string texte = "vive la plateforme";
    for (size_t i = 0; i <texte.length(); i++) {
        texte[i] = toupper(texte[i]);
    }
    cout << texte << endl;
    return 0;
}