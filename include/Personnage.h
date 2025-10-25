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
    // Constructeur
    Personnage(std::string n, int pv, int atk, int def);

    // Méthodes
    bool estVivant() const;
    void subirDegats(int degats);
    void afficherStats() const;

    // Accesseurs
    std::string getNom() const;
    int getAttaque() const;
};
