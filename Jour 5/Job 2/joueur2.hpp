//
// Created by nadjl on 18/05/2025.
//

#ifndef JOUEUR2_HPP
#define JOUEUR2_HPP
#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    // Constructeur par défaut
    Joueur();

    // ✅ Nouveau constructeur avec initialisation des attributs
    Joueur(int x_init, int y_init);

    void initialiser(int x_init, int y_init);
    void afficherPosition() const;

    void deplacerGauche();
    void deplacerDroite();
    void deplacerHaut();
    void deplacerBas();
};

#endif //JOUEUR2_H
