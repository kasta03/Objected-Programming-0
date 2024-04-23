#pragma once

class MapPoint {
private:
    double latitude;
    double longitude;

public:
    MapPoint();
    void set_latitude(double lat);
    void set_longitude(double lon);
    void set_coordinates(double lat, double lon);
    void print() const;
    MapPoint closest(const MapPoint& point1, const MapPoint& point2) const;
    MapPoint half_way_to(const MapPoint& point) const;
};
