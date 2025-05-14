//
// Created by nadjl on 13/05/2025.
//
#include<iostream>
using namespace std;

int main(){
    int n;
    std::cin>>n;
    switch(n)
    {
        case 0: std::cout<< "Nul\n";
        case 1:
        case 2: std::cout <<"Petit\n";
                            break;
        case 3:
        case 4:
        case 5: std::cout<<"Moyen\n";
        default : std::cout <<"Grand\n";
    }
}
//pour 0 = nul petit, pour 1 = petit, pour 4= moyen grand, pour 10 = grand, pour -5= grand