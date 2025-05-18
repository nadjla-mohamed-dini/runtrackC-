//
// Created by nadjl on 18/05/2025.
//
#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:

    Joueur() : x(0), y(0) {}


    Joueur(int x_init, int y_init) : x(x_init), y(y_init) {}


    void initialiser(int x_init, int y_init) {
        x = x_init;
        y = y_init;
    }

    void afficherPosition() const {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }


    void deplacerGauche() { x -= 1; }
    void deplacerDroite() { x += 1; }
    void deplacerHaut()   { y += 1; }
    void deplacerBas()    { y -= 1; }
};

int main() {

    Joueur joueur(5, 10);
    joueur.afficherPosition();


    joueur.deplacerDroite();
    joueur.deplacerHaut();
    joueur.afficherPosition();

    joueur.deplacerGauche();
    joueur.deplacerBas();
    joueur.afficherPosition();

    return 0;
}
