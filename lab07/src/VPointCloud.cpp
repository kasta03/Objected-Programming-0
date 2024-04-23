#include <PointCloud.h>

void VPointCloud::addPoint(const Point3D& point)
{
    vectorOfPoints.push_back(point);
}

void VPointCloud::add(const APointCloud& ACloud)
{
    vectorOfPoints.push_back(ACloud.points[0]);
    vectorOfPoints.push_back(ACloud.points[1]);
}

size_t VPointCloud::count() const
{
    return vectorOfPoints.size();
}
Point3D VPointCloud::geoCentre() 
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