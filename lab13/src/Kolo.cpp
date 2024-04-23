#include "Kolo.h"
#define PI 3.1415

Kolo::Kolo(double r) : r(r) {}

void Kolo::wypisz(std::ostream& o) const 
{
    o << "Kolo o promieniu: " << r << std::endl;
}

double Kolo::polePow() const 
{
    return 2*PI*r;
}