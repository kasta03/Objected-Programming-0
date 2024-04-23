#pragma once
#include <iostream>

class Obszar
{
    public:
    virtual void wyswietlInformacje() const;
};

class Kontynent: public Obszar
{
    public:
    void wyswietlInformacje() const
    { 
        std::cout << "Kontynent! " << std::endl;
    }
};

class Kraj: public Obszar 
{
    public:
    void wyswietlInformacje() const
    { 
        std::cout << "Kraj! " << std::endl;
    }  
};