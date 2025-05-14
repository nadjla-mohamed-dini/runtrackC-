//
// Created by nadjl on 14/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int i, n ,som;
    som = 0;
    while (i<4) {
        cout <<"Donnez un entier: ";
        cin >>n;
        som += n;
        i++;
    }
    cout <<"Somme: "<<som<<endl;
    return 0;

}
int main() {
    int i, n ,som;
    som =0;
    do {
        cout <<"Donnez un entier: ";
        cin>>n;
        som += n;
        i ++;
    }while (i<4);
    cout <<"Somme: "<<som<<endl;
    return 0;
}
