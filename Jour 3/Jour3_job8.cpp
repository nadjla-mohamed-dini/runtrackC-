//
// Created by nadjl on 15/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    char tab [100];
    cout<<"Enter some sting : ";
    cin.getline(tab,100);

    int i = 0;
    while(tab[i]!='\0') {
        cout<<tab[i]<<endl;
        i ++;
    }
    return 0;
}