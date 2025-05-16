//
// Created by nadjl on 15/05/2025.
//
#include<iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {11,42};

    Point* ptr = &p;

    std::cout << "X: "<<ptr->x<<std::endl;
    std::cout << "Y: "<<ptr->y<<std::endl;

    ptr->x =3;
    ptr->y=15;

    std::cout<<"X modifier: "<<ptr->x<<std::endl;
    std::cout<<"Y modifier: "<<ptr->y<<std::endl;

    return 0;
}