#pragma once
#include <iostream>

class Zwierze
{
    public:
    virtual void wydajDzwiek() const
    {
        std::cout << " wydaje dzwiek" << std::endl;
    } 
    virtual void wyswietlInformacje() const = 0;
};

class Ptak: public Zwierze
{
    public:
    Kraj* _miejsce_zycia;
    Ptak(Kraj* miejsce_zycia): _miejsce_zycia(miejsce_zycia){}
    void wyswietlInformacje() const
    {
        std::cout << "Ptak " << std::endl;
        std::cout << _miejsce_zycia->wyswietlInformacje() << std::endl;
    }

};

class Ssak: public Zwierze
{
    public:
    Kraj* _miejsce_zycia;
    // Ssak(Kraj* miejsce_zycia): _miejsce_zycia(miejsce_zycia){}
    void wyswietlInformacje() const
    {
        std::cout << "Ssak " << std::endl;
        std::cout << _miejsce_zycia->wyswietlInformacje() << std::endl;
    }

};