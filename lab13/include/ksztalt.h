#pragma once
#include <ostream>
#include <iostream>

// class ksztalt
// {
//     public:
//     virtual void wypisz(const ksztalt& obj) const = 0;
//     virtual void polePow() const = 0;
// };

class Ksztalt 
{
public:
    //funkcje virtualne 
    virtual void wypisz(std::ostream& o) const = 0;
    virtual double polePow() const = 0;
    virtual ~Ksztalt() {}
};

inline void wypisz(const Ksztalt& obj)
{
    obj.wypisz(std::cout);
}