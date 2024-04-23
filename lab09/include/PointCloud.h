#pragma once
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <cmath>
#include <VPoint.h>

class VPointCloud;
class Point3D
{
    std::array<double, 3> _Coordinates;

public:
    static int DISPLAY_PRESITION;
    //konstruktory
    Point3D();
    Point3D(double X);
    Point3D(std::array<double, 3> coordinates);
    //wyswietlanie
    void displayCoordinates() const;

    //operatory
    explicit operator double () const {return sqrt(_Coordinates[0]*_Coordinates[0] + _Coordinates[1]*_Coordinates[1] + _Coordinates[2]* _Coordinates[2]);};
    static std::string to_string(const Point3D& other);
    operator std::string () const {return "(" + std::to_string(_Coordinates[0]) + "," +  std::to_string(_Coordinates[1]) + "," + std::to_string(_Coordinates[2]) + "(" ;};
};
