#include <PointCloud.h>

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

void VPointCloud::add(const VPointCloud points)
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

VPointCloud::VPointCloud(VPointCloud &&other)
{
    _vectorOfPoints = std::move(other._vectorOfPoints);
    other._vectorOfPoints.clear();
}

// void VPointCloud::add(const VPointCloud& other)
// {
//     _vectorOfPoints.insert(_vectorOfPoints.end(), other._vectorOfPoints.begin(), other._vectorOfPoints.end());
// }

void VPointCloud::addPoint()
{
    _vectorOfPoints.push_back(new Point3D());
}

VPointCloud::~VPointCloud()
{
    for (auto *point : _vectorOfPoints)
    {
        delete point;
    }
    _vectorOfPoints.clear();
};
