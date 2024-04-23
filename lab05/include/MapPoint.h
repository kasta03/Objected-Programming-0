#pragma once 
#include <cmath>
#include <iostream>


class MapPoint
{
    //atrybuty prywatne klasy, os X i Y
    double latitude;
    double longitude;
public:

    // konstruktor domyslny
    MapPoint();
    // konstruktor
    MapPoint(double valX, double valY);

    // wypisuje zawartosc obiektu
    void print() const;

    // ustawia obydwa koordynaty (to nie jest konstruktor)
    void set_coordinates(double lat, double lon);

    // obydwa licza dystans, pierwszy edytuje orginalna zawartosc, a drugi operuje na wskazniku
    double distanceVal(const MapPoint& city) const;
    double distanceVal(const MapPoint* city) const;
};
