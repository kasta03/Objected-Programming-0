#pragma once
#include <iostream>

class MapPoint
{
    double longitude;
    double latitude;
public:
    static int NMapPoint;
    MapPoint()
    {
        latitude = 0;
        longitude = 0;
        NMapPoint++;
        std::cout << NMapPoint << std::endl;
    }
    MapPoint(double lat, double lon)
    {
        latitude = lat;
        longitude = lon;
        NMapPoint++;
        std::cout << NMapPoint << std::endl;
    }
    MapPoint(const MapPoint& other)
    {
        latitude = other.latitude;
        longitude = other.longitude;
        NMapPoint++;
    }

    void print() const;
    double distanceVal(const MapPoint& city) const;
    MapPoint cpyNullIsland(const MapPoint& src);
};
