//
// Created by nadjl on 14/05/2025.
//
#include<iostream>
using namespace std;

int main () {
    int T [10];
    cout<<"Enter number: ";cin>>T[0];
    for (int i = 0; i<10; i++) {
        cout<<"enter number"<< i + 1<< ": ";
        cin>>T[i];
    }
    int compteur = 0;
    for (int i = 0; i<10; i++) {
        if (T[i]>=5) {
            compteur++;
            cout<<"il y a"<<compteur<<"valeur sup ou egale a 5"<<endl;
        }
    }
}