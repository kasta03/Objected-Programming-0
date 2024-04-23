#include "PointCloud.h"

Point3D::Point3D(std::array<double, 3> coordinates) : Coordinates(coordinates) {}

void Point3D::displayCoordinates() const
{
    std::cout << "(" << Coordinates.at(0) << ", " << Coordinates.at(1) << ", " << Coordinates.back() << ")" << '\n';
}

APointCloud::APointCloud() : points(nullptr), size(0) {}

void APointCloud::addPoint(const Point3D &point)
{
    Point3D *arrayOfPoints = new Point3D[size + 1];
    arrayOfPoints[size] = point;
    for (int i = 0; i < size; ++i)
    {
        arrayOfPoints[i] = points[i];
    }
    delete[] points;
    points = arrayOfPoints;
    ++size;
}

const void APointCloud::displayPoints() const
{
    std::cout << "Chmura punktów [APC]:" << std::endl;
    points[0].Point3D::displayCoordinates();
    points[1].Point3D::displayCoordinates();
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
Point3D APointCloud::geoCentre() 
{
    Point3D centre;
    for (int i = 0; i < size; ++i) 
    {
        centre = Point3D
        ({
            centre.getX() + points[i].getX(),
            centre.getY() + points[i].getY(),
            centre.getZ() + points[i].getZ()
        });
    }
    centre = Point3D
    ({
        centre.getX() / size,
        centre.getY() / size,
        centre.getZ() / size
    });
    return centre;
}


APointCloud::~APointCloud()
{
    delete points;
}

using namespace VPointCloud;
{
void addPoint(const Point3D& point)
{
    vectorOfPoints.push_back(point);
}

void add(const APointCloud& ACloud)
{
    vectorOfPoints.push_back(ACloud.points[0]);
    vectorOfPoints.push_back(ACloud.points[1]);
}

size_t count() const
{
    return vectorOfPoints.size();
}
Point3D geoCentre() 
{
    Point3D centre;
    for (int i = 0; i < vectorOfPoints.size(); ++i) 
    {
        centre = Point3D
        ({
            centre.getX() + vectorOfPoints.at(i).getX(),
            centre.getY() + vectorOfPoints.at(i).getY(),
            centre.getZ() + vectorOfPoints.at(i).getZ()
        });
    }
    centre = Point3D
    ({
        centre.getX() / vectorOfPoints.size(),
        centre.getY() / vectorOfPoints.size(),
        centre.getZ() / vectorOfPoints.size()
    });
    return centre;
}
}