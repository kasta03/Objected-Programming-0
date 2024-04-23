#pragma once
#include <ComplexNumber.h>

class Vector
{
    ComplexNumber first;
    ComplexNumber second;
    ComplexNumber third;
    
    public:
    
    Vector();
    Vector(ComplexNumber, ComplexNumber, ComplexNumber);

    Vector&  SetX(double, double);
    Vector&  SetY(double, double);
    Vector&  SetZ(double, double);

    void Print() const;

    ComplexNumber& X();
    const ComplexNumber& X() const;
    static const Vector* CreateConstVector(const ComplexNumber& x, const ComplexNumber& y, const ComplexNumber& z);
    static void Cleanup();
    ~Vector();
};