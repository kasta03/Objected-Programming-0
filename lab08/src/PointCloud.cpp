#include "PointCloud.h"

int Point3D::DISPLAY_PRESITION = 0;

Point3D::Point3D() : Coordinates({0.0, 0.0, 0.0}) {}

Point3D::Point3D(std::array<double, 3> coordinates) : Coordinates(coordinates) {}

Point3D::Point3D(double X) : Point3D()
{
    Coordinates[0] = X;
}

void Point3D::displayCoordinates() const
{
    std::cout << "(" << Coordinates.at(0) << ", " << Coordinates.at(1) << ", " << Coordinates.back() << ")" << '\n';
}

double Point3D::getX() const 
{
    return Coordinates[0];
}

double Point3D::getY() const 
{
    return Coordinates[1];
}

double Point3D::getZ() const 
{
    return Coordinates[2];
}