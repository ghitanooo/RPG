#pragma once
#include <string>
#include <iostream>

class Personnage {
protected:
    std::string nom;
    int pointsVie;
    int attaque;
    int defense;

public:
    Personnage(std::string n, int pv, int atk, int def)
        : nom(n), pointsVie(pv), attaque(atk), defense(def) {}

    bool estVivant() const { return pointsVie > 0; }

    void subirDegats(int degats) {
        int net = degats - defense;
        if (net < 0) net = 0;
        pointsVie -= net;
        if (pointsVie < 0) pointsVie = 0;
    }

    void afficherStats() const {
        std::cout << nom << " (PV: " << pointsVie
                  << ", ATK: " << attaque
                  << ", DEF: " << defense << ")\n";
    }

    std::string getNom() const { return nom; }
    int getAttaque() const { return attaque; }
};
