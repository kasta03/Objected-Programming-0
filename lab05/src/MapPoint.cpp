#include "MapPoint.h"

MapPoint::MapPoint(double val1, double val2)
    {
        latitude = val1;
        longitude = val2;
    }

MapPoint::MapPoint()
    {
        latitude = 0;
        longitude = 0;
    }

void MapPoint::print() const
{
    std::cout << "Point: (" << latitude << ", " << longitude << ")\n";
}

void MapPoint::set_coordinates(double valX, double valY)
{
    latitude = valX;
    longitude = valY;
}

double MapPoint::distanceVal(const MapPoint& city) const
{
    double deltaX = (latitude - city.latitude);
    double deltaY = (longitude - city.longitude);
    
    return sqrt(deltaX*deltaX + deltaY*deltaY);
}

double MapPoint::distanceVal(const MapPoint* city) const
{
    double deltaX = (latitude - city->latitude);
    double deltaY = (longitude - city->longitude);

    return sqrt(deltaX*deltaX + deltaY*deltaY);
}