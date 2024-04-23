#include "MapPoint.h"
#include <iostream>
#include <cmath>

MapPoint::MapPoint() : latitude(0.0), longitude(0.0) {}
MapPoint::MapPoint(double lat, double lon) : latitude(lat), longitude(lon) {}

void MapPoint::set_latitude(double val)
{
    latitude = val;
}
void MapPoint::set_longitude(double val)
{
    longitude = val;
}
void MapPoint::print()
{
    std::cout << "Point: (" << latitude << ", " << longitude << ")\n";
}
void MapPoint::set_coordinates(double lat, double lon)
{
    latitude = lat;
    longitude = lon;
}
MapPoint MapPoint::closest(MapPoint& miasto1, MapPoint& miasto2)
{
    double distance_1 = sqrt(((latitude-miasto1.latitude)*(latitude-miasto1.latitude) + (longitude-miasto1.longitude)*(longitude-miasto1.longitude)));
    double distance_2 = sqrt(((latitude-miasto2.latitude)*(latitude-miasto2.latitude) + (longitude-miasto2.longitude)*(longitude-miasto2.longitude)));
    if(distance_1 < distance_2)
    {
        return miasto1;
    }
    else
    {
        return miasto2;
    }
}
MapPoint MapPoint::half_way_to(MapPoint& miasto)
{
    double new_lat = (latitude + miasto.latitude) / 2;
    double new_lon = (longitude + miasto.longitude) / 2;
    return MapPoint(new_lat, new_lon);
}