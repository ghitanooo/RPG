#include "Joueur.h"
#include <iostream>

Joueur::Joueur(std::string n)
    : Personnage(n, 100, 20, 5), experience(0), niveau(1) {}

void Joueur::gagnerXP(int xp) {
    experience += xp;
    if (experience >= 100) {
        niveau++;
        experience = 0;
        attaque += 5;
        pointsVie += 20;
        std::cout << "💪 " << nom << " monte au niveau " << niveau << "!\n";
    }
}
