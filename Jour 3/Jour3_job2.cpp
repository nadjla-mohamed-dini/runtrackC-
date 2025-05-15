//
// Created by nadjl on 14/05/2025.
//
#include <string>
#include <iostream>
#include <algorithm> // pour std::remove

using namespace std;

int main() {
    string text = "vive la plateforme";


    text.erase(remove_if(text.begin(), text.end(), [](char c) {
        c = tolower(c); // On ignore la casse
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
    }), text.end());

    cout << text << endl;
    return 0;
}
