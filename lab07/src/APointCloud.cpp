#include <PointCloud.h>

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

APointCloud::~APointCloud()
{
    delete points;
}