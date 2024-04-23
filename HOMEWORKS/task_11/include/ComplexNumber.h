#pragma once
#include <iostream>

class ComplexNumber
{
    double X;
    double Y;
    public:
    // ComplexNumber();
    ComplexNumber(double XX = 0, double YY = 0);

    void Print() const;
};