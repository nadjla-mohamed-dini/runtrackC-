//
// Created by nadjl on 15/05/2025.
//
#include<iostream>
#include <string>
using namespace std;

bool estInclude (string chaine1, string chaine2) {
    return chaine2.find(chaine1) != string::npos;
}

int main() {
    string str1, str2;

    cout<<"Enter the first string: ";
    getline(cin,str1);

    cout<<"Enter the second string: ";
    getline(cin,str2);

    if (estInclude(str1, str2)) {
        cout<<"vrai"<<str1<<endl;
    }else {
        cout<<"faux"<<endl;
    }
    return 0;
}
