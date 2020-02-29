#include "Personnage.h"

Personnage::Personnage()
{
    nom = "Inconnu";
    niv = 1u;
    pv = 100u;
    specialisation = "Aucune";
}

Personnage::Personnage(std::string nom, unsigned niv, unsigned pv)
{
    this->nom = nom;
    this->niv = niv;
    this->pv = pv;
    specialisation = "Aucune";
}

unsigned Personnage::getPv()
{
    return pv;
}

void Personnage::changerArme(Arme nouvelleArme)
{
    if(nouvelleArme.getNiv() <= niv)
        arme = nouvelleArme;
    else  
        std::cout << "Cette arme est trop puissante pour ce personnage" << std::endl;
}

void Personnage::subit(unsigned degatsSubits)
{
    if(pv > degatsSubits)
        pv -= degatsSubits;
    else 
        pv = 0u;
}

void Personnage::attaque(Personnage& cible)
{
    cible.subit(arme.getDeg());
}
