#include "PointCloud.h"

int Point3D::DISPLAY_PRESITION = 0;

Point3D::Point3D() : _Coordinates({1.0, 1.0, 1.0}) {}

Point3D::Point3D(std::array<double, 3> _Coordinates) : _Coordinates(_Coordinates) {}

Point3D::Point3D(double X) : Point3D()
{
    _Coordinates[0] = X;
}

void Point3D::displayCoordinates() const 
{
    std::cout << "(" << std::fixed << std::setprecision(2) << _Coordinates[0]
              << ", " << std::fixed << std::setprecision(2) << _Coordinates[1]
              << ", " << std::fixed << std::setprecision(2) << _Coordinates[2] << ")\n";
}

std::string Point3D::to_string(const Point3D& other) 
{
    return "(" + std::to_string(other._Coordinates[0]) + "," + std::to_string(other._Coordinates[1]) + "," +
           std::to_string(other._Coordinates[2]) + ")";
}