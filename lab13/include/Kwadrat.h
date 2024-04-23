#pragma once
#include "ksztalt.h"



class Kwadrat : public Ksztalt {
public:
    //konstruktor
    Kwadrat(double bok);
    //funkcje
    virtual void wypisz(std::ostream& o) const;
    virtual double polePow() const;

private:
    //bok
    double bok;
};