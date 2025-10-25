#pragma once
#include "Personnage.h"

class Joueur : public Personnage {
private:
    int experience;
    int niveau;

public:
    Joueur(std::string n);
    void gagnerXP(int xp);
};
