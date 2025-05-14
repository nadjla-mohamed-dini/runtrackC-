//
// Created by nadjl on 14/05/2025.
//
#include<iostream>
using namespace std;

int main() {
    int note = std::rand() % 21;
    cout<<"Enter note: ";cin>>note;
    if (note>10) {
        cout<<"valid.";
    }else {
        cout<<"invalid.";
    }
}