//
// Created by nadjl on 15/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int T[10];
    for (int i = 0; i < 10; i++) {
        cout<<"Enter number: "<<i+1<<": ";
        cin>>T[i];
    }
    int max = T[0];
    for (int i = 0; i < 10; i++) {
        if (T[i] > max) {
            max = T[i];

        }
    }
    cout<<"le nombre le plus grand est "<<max<<endl;

    return 0;

}