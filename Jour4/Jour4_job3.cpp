//
// Created by nadjl on 15/05/2025.
//
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

int main() {
    string n;
    cout<<"enter some string: ";cin>>n;

    char* start = &n[0];
    char* end = &n[0] +n.size();

    reverse(start,end);

    cout<<n<<endl;
    return 0;

}