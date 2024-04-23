#include "Kwadrat.h"

Kwadrat::Kwadrat(double bok) : bok(bok) {}

void Kwadrat::wypisz(std::ostream& o) const 
{
    o << "Kwadrat o boku: " << bok << std::endl;
}

double Kwadrat::polePow() const 
{
    return bok * bok;
}
