#include "MapPoint.h"
#include <cmath>


int MapPoint::NMapPoint = 0;
void MapPoint::print() const
{
    std::cout << "Point: (" << latitude << ", " << longitude << ")\n";
}

double MapPoint::distanceVal(const MapPoint& city) const
{
    NMapPoint++;
    double deltaX = (latitude - city.latitude);
    double deltaY = (longitude - city.longitude);
    
    return sqrt(deltaX*deltaX + deltaY*deltaY);
}

MapPoint MapPoint::cpyNullIsland(const MapPoint& src) 
{
    return src;
}