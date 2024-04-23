#include "Angle.h"

Angle::Angle(double radians)
{
    while(radians >= 2) radians = radians - 2 * M_PI;
    while(radians < 0) radians = radians + 2 * M_PI;
    angleRad = radians;
    std::cout << "... creating angle from radians." << std::endl;
}

Angle Angle::fromRadians(double radians) {
    return Angle(radians);
}

Angle Angle::fromDegrees(double degrees)
{
    double radians = degrees*(M_PI/180);
    return Angle(radians);
}

void Angle::print() const
{
   std::cout << "Angle [rad]: "<<angleRad<< std::endl;
}

Angle& Angle::add(const Angle& other) 
{
    angleRad += other.angleRad;
    while (angleRad < 0) {
        angleRad += 2 * M_PI;
    }
    while (angleRad >= 2 * M_PI) {
        angleRad -= 2 * M_PI;
    }
    return *this;
}

double Angle::toDeg() const 
{
    return angleRad * (180 / M_PI);
}