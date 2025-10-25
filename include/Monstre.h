#pragma once
#include "Personnage.h"

class Monstre : public Personnage {
public:
    Monstre(std::string n, int pv, int atk, int def);
};
