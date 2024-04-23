#pragma once
#include "ksztalt.h"

class Kolo : public Ksztalt 
{
public:
    //konstuktor
    Kolo(double r);
    //funkcje
    virtual void wypisz(std::ostream& o) const;
    virtual double polePow() const;

private:
    //promien
    double r;
};