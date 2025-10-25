#include "Personnage.h"

Personnage::Personnage(std::string n, int pv, int atk, int def)
    : nom(n), pointsVie(pv), attaque(atk), defense(def) {}

bool Personnage::estVivant() const {
    return pointsVie > 0;
}

void Personnage::subirDegats(int degats) {
    int net = degats - defense;
    if (net < 0) net = 0;
    pointsVie -= net;
    if (pointsVie < 0) pointsVie = 0;
}

void Personnage::afficherStats() const {
    std::cout << nom << " (PV: " << pointsVie
              << ", ATK: " << attaque
              << ", DEF: " << defense << ")\n";
}

std::string Personnage::getNom() const {
    return nom;
}

int Personnage::getAttaque() const {
    return attaque;
}
