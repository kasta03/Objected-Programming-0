#pragma once
#include <iostream>
#include <array>
#include <vector>

class Point3D
{
    std::array <double, 3> Coordinates;

    public:
    Point3D() = default;
    Point3D(std::array <double, 3> coordinates);
    void displayCoordinates() const;
    double getX() const;
    double getY() const;
    double getZ() const;
};

class VPointCloud;

class APointCloud
{
    friend VPointCloud;
    Point3D * points;
    int size;

    public:
    
    APointCloud();
    ~APointCloud();
    void addPoint(const Point3D& point);
    const void displayPoints() const;
    Point3D geoCentre();
};

class VPointCloud
{
    std::vector <Point3D> vectorOfPoints;

    public:

    void addPoint(const Point3D& point);
    void add(const APointCloud& ACloud);
    size_t count() const;
    Point3D geoCentre();
};