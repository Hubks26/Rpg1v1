#include "Arme.h"

Arme::Arme()
{
    nom = "Petit couteau inoffensif";
    deg = 1;
    niv = 0;
}

Arme::Arme(std::string nom, unsigned deg, unsigned niv)
{ 
    this->nom = nom;
    this->deg = deg;
    this->niv = niv;
}

unsigned Arme::getDeg() const
{
    return deg;
}

unsigned Arme::getNiv() const
{
    return niv;
}
