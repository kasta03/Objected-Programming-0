#pragma once
#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <memory>

class Point3D
{
    std::array<double, 3> Coordinates;

public:
    static int DISPLAY_PRESITION;

    Point3D();
    Point3D(double X);
    Point3D(std::array<double, 3> coordinates);
    void displayCoordinates() const;
    double getX() const;
    double getY() const;
    double getZ() const;
};

class VPointCloud
{
    std::vector<Point3D*> _vectorOfPoints;

public:

    VPointCloud() = default;
    void addPoint(const std::array<double, 3> &point);
    //void addPoint(const Point3D &point);
    size_t count() const;
    Point3D geoCentre() const;
    void addPoint(Point3D *pointers);
    void displayPoints() const;
    Point3D* getCopyPoint(int i) const;
    void add(const VPointCloud &points);

    VPointCloud(const VPointCloud& other);

    // VPointCloud& operator=(const VPointCloud& other);

    ~VPointCloud();
};
