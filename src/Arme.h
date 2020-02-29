#ifndef ARME_H
#define ARME_H

#include <string>

class Arme
{
public:
    Arme();
    Arme(std::string nom, unsigned deg, unsigned niv);
    
    unsigned getDeg() const;
    unsigned getNiv() const;
    
private:
    std::string nom;
    unsigned deg;
    unsigned niv;
};

#endif
