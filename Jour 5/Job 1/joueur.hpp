//
// Created by nadjl on 18/05/2025.
//

#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x;
    int y;

public:
    // Constructeur par défaut
    Joueur();

    // Constructeur avec paramètres
    Joueur(int x_init, int y_init);

    // Méthode pour initialiser les valeurs
    void initialiser(int x_init, int y_init);

    // Méthode pour afficher la position
    void afficherPosition() const;

    // Méthodes pour déplacer le joueur
    void deplacerGauche();
    void deplacerDroite();
    void deplacerHaut();
    void deplacerBas();
};

#endif


