#include "MapPoint.h"
#include <iostream>
#include <cmath>

MapPoint::MapPoint() : latitude(0.0), longitude(0.0) {}

void MapPoint::set_latitude(double lat) {
    latitude = lat;
}

void MapPoint::set_longitude(double lon) {
    longitude = lon;
}

void MapPoint::set_coordinates(double lat, double lon) {
    latitude = lat;
    longitude = lon;
}

void MapPoint::print() const {
    std::cout << "Point: (" << latitude << ", " << longitude << ")\n";
}

MapPoint MapPoint::closest(const MapPoint& point1, const MapPoint& point2) const {
    double dist1 = std::sqrt(std::pow(latitude - point1.latitude, 2) + std::pow(longitude - point1.longitude, 2));
    double dist2 = std::sqrt(std::pow(latitude - point2.latitude, 2) + std::pow(longitude - point2.longitude, 2));

    return (dist1 < dist2) ? point1 : point2;
}

MapPoint MapPoint::half_way_to(const MapPoint& point) const {
    double avg_latitude = (latitude + point.latitude) / 2;
    double avg_longitude = (longitude + point.longitude) / 2;

    MapPoint halfway_point;
    halfway_point.set_coordinates(avg_latitude, avg_longitude);

    return halfway_point;
}
