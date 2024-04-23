#include <PointCloud.h>

void VPointCloud::addPoint(const std::array<double, 3> &point)
{
    _vectorOfPoints.push_back(new Point3D(point));
}

// void VPointCloud::addPoint(const Point3D &point)
// {
//     _vectorOfPoints.push_back(new Point3D(point));
// }

size_t VPointCloud::count() const
{
    return _vectorOfPoints.size();
}

Point3D VPointCloud::geoCentre() const
{
    if (_vectorOfPoints.empty())
    {
        return Point3D();
    }

    Point3D centre;
    for (const auto *point : _vectorOfPoints)
    {
        centre = Point3D({centre.getX() + point->getX(),
                          centre.getY() + point->getY(),
                          centre.getZ() + point->getZ()});
    }
    return Point3D({centre.getX() / _vectorOfPoints.size(),
                    centre.getY() / _vectorOfPoints.size(),
                    centre.getZ() / _vectorOfPoints.size()});
}

void VPointCloud::addPoint(Point3D *pointers)
{
    _vectorOfPoints.push_back(pointers);
}

void VPointCloud::displayPoints() const
{
    for (int i = 0; i < _vectorOfPoints.size(); ++i)
    {
        _vectorOfPoints.at(i)->displayCoordinates();
    }
}

Point3D *VPointCloud::getCopyPoint(int i) const
{

    return new Point3D(*_vectorOfPoints.at(i));
}

void VPointCloud::add(const VPointCloud &points)
{
    for (const Point3D *point : points._vectorOfPoints)
    {
        _vectorOfPoints.push_back(new Point3D(*point));
    }
}

VPointCloud::VPointCloud(const VPointCloud &other)
{
    for (const Point3D *point : other._vectorOfPoints)
    {
        _vectorOfPoints.push_back(new Point3D(*point));
    }
}

// VPointCloud &VPointCloud::operator=(const VPointCloud &other)
// {
//     if (this != &other)
//     {
//         for (auto *point : _vectorOfPoints)
//         {
//             delete point;
//         }
//         _vectorOfPoints.clear();

//         for (const auto *point : other._vectorOfPoints)
//         {
//             _vectorOfPoints.push_back(new Point3D(*point));
//         }
//     }
//     return *this;
// }

VPointCloud::~VPointCloud()
{
    for (auto *point : _vectorOfPoints)
    {
        delete point;
    }
    _vectorOfPoints.clear();
};