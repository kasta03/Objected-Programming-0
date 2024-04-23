#pragma once
#include <iostream>
#include <string>

class MapPoint
{
public:
    MapPoint(double lat, double lon);
    MapPoint();
    void set_latitude(double lat);
    void set_longitude(double lon);
    void print();
    void set_coordinates(double lat, double lon);
    MapPoint closest(MapPoint& miasto1, MapPoint& miasto2);
    MapPoint half_way_to(MapPoint& miasto);

private:
    double latitude;
    double longitude;
};