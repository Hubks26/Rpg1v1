#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <iostream>
#include "Arme.h"

class Personnage
{
public:
    Personnage();
    Personnage(std::string nom, unsigned niv, unsigned pv);
    
    unsigned getPv();
    
    void changerArme(Arme nouvelleArme);
    void subit(unsigned degatsSubits);
    void attaque(Personnage& cible);
    
private:
    std::string nom;
    std::string specialisation;
    unsigned pv;
    unsigned niv;
    Arme arme;
};

#endif
