#include "MapPoint.h"

void MapPoint::SetName(const std::string& newName) {
    name = newName;
}

void MapPoint::SetCoordinates(double newLatitude, double newLongitude) {
    latitude = newLatitude;
    longitude = newLongitude;
}

void MapPoint::SetInfo(const std::string& newName, double newLatitude, double newLongitude) {
    SetName(newName);
    SetCoordinates(newLatitude, newLongitude);
}

void MapPoint::SetInfo(const std::string& newName, const MapPoint& point) {
    SetName(newName);
    SetCoordinates(point.latitude, point.longitude);
}

void MapPoint::Print() const {
    std::cout << "Position of " << name << ":: Latitude: " << latitude << ", Longitude: " << longitude << std::endl;
}

MapPoint& MapPoint::Shift(double xx, double yy) {
    latitude += xx;
    longitude += yy;
    return *this;
}

double MapPoint::Distance(const MapPoint& other) const {
    double diff_x = latitude - other.latitude;
    double diff_y = longitude - other.longitude;
    return std::sqrt(diff_x * diff_x + diff_y * diff_y);
}

MapPoint& MapPoint::Farthest(const MapPoint& point1, const MapPoint& point2) {
    double distance1 = Distance(point1);
    double distance2 = Distance(point2);
    return (distance1 > distance2) ? const_cast<MapPoint&>(point1) : const_cast<MapPoint&>(point2);
}
