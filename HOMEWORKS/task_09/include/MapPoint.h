#pragma once
#include <iostream>
#include <cmath>

class MapPoint {
private:
    std::string name;
    double latitude;
    double longitude;

public:
    void SetName(const std::string& newName);
    void SetCoordinates(double newLatitude, double newLongitude);
    void SetInfo(const std::string& newName, double newLatitude, double newLongitude);
    void SetInfo(const std::string& newName, const MapPoint& point);
    void Print() const;
    MapPoint& Shift(double xx, double yy);
    double Distance(const MapPoint& other) const;
    MapPoint& Farthest(const MapPoint& point1, const MapPoint& point2);
};