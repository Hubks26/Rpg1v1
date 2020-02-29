#include "Personnage.h"

int main()
{
    Arme armeGoliath("Grosse hache de la mort qui tue", 50, 2000);
    Personnage David("David",12,150);
    Personnage Goliath("Goliath",2001,2);
    Goliath.changerArme(armeGoliath);
    David.changerArme(armeGoliath);
    Goliath.attaque(David);
    David.attaque(Goliath);
    std::cout << "Goliath a " << Goliath.getPv() << " points de vie" << std::endl;
    std::cout << "David a " << David.getPv() << " points de vie" << std::endl;

    return 0;
}
