#include <PointCloud.h>

class Point3D;
class VPointCloud
{
    std::vector<Point3D*> _vectorOfPoints;

public:
    //kostruktor domyslny
    VPointCloud() = default;
    //funkcja dodajaca
    void addPoint(Point3D *pointers);
    //wyswietlanie wektora
    void displayPoints() const;
    //dodawanie do wektora
    void add(const VPointCloud other);
    //konstruktor 
    VPointCloud(const VPointCloud& other);
    //destruktor
    ~VPointCloud();
    //dodawanie bezargumentowe
    void addPoint();
    //konstruktor
    VPointCloud(VPointCloud&& other);
};
