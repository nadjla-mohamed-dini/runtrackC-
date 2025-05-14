//
// Created by nadjl on 14/05/2025.
//
#include <algorithm>
#include<iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char signe;

    cout<<"Enter the first number: ";cin>>num1;
    cout<<"Enter the operator: ";cin>>signe;
    cout<<"Enter the second number: ";cin>>num2;

    switch(signe) {
        case '+':
            result=num1+num2;
            cout<<"Addition is: "<<result<<endl;

        case '-':
            result=num1-num2;
            cout<<"Subtraction is: "<<result<<endl;

        case '*':
            result=num1*num2;
            cout<<"Multiplication is: "<<result<<endl;

        case '/':
            if(num2!=0) {
                result=num1/num2;
                cout<<"Division is: "<<result<<endl;
            }else {
                cout<<"Error don't divide by zero"<<endl;

            }
            break;
            default:
                cout<<"invalid operator"<<endl;
    }
    return 0;
}