#pragma once
#include <cmath>
#include <iostream>

class Angle
{
    private:
    double angleRad;
    
    public:
    explicit Angle(double x = 0);
    static Angle fromRadians(double radians);
    static Angle fromDegrees(double degrees);
    void print() const;
    Angle& add(const Angle& other);
    double toDeg() const;
};