// #include <Car.h>

// Car::Car( char* brand, int year, int mileage) : _brand(brand), _year(year)
// {
//     this->_mileage = new int;
//     *this->_mileage = mileage;
//     std::cout << "Konstruktor" << std::endl;
// };

// void Car::displayInfo() const
// {
//     std::cout << "Brand: " << _brand << ", Year: " << _year << ", Mileage: "
//               << ( std::to_string(*_mileage) + " km") << std::endl;
// }

// Car::Car(const Car& other) : _brand(other._brand), _year(other._year)
// {
//     this->_mileage = new int;
//     this->_mileage = other._mileage;
//     std::cout << "Konstruktor kopiujacy" << std::endl;
// }

// Car::Car(Car&& other) noexcept : _brand(other._brand), _year(other._year), _mileage(other._mileage)
// {
//     std::cout << "Konstruktor przenoszacy" << std::endl;
// }

// Car& Car::operator=(const Car& other)
// {
//     _brand = other._brand;
//     _year = other._year;
//     _mileage = other._mileage;
//     return *this;
//     std::cout << "operator przypisania przenoszacego" << std::endl;
// }

// Car::~Car()
// {
//     delete _mileage;
// }

#include "Car.h"
#include <cstring>

// Constructor
Car::Car(const char *brand, int year, int mileage) : year(year)
{
    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);

    this->mileage = new int(mileage);
}

// Copy Constructor
Car::Car(const Car &other) : year(other.year)
{
    brand = new char[strlen(other.brand) + 1];
    strcpy(brand, other.brand);

    mileage = new int(*other.mileage);

    std::cout << "adam kozla" << '\n';
}

// Move Constructor
Car::Car(Car &&other) noexcept : brand(std::move(other.brand)), year(other.year), mileage(std::move(other.mileage))
{
    other.brand = nullptr;
    other.mileage = nullptr;
    std::cout << "kuba kozla" << '\n';
}

// Destructor
Car::~Car()
{
    delete[] brand;
    delete mileage;
}

// Copy Assignment Operator
Car &Car::operator=(const Car &other)
{
    if (this != &other)
    {
        delete[] brand;
        delete mileage;

        year = other.year;
        brand = new char[strlen(other.brand) + 1];
        strcpy(brand, other.brand);

        mileage = new int(*other.mileage);
    }
    return *this;
}

// Move Assignment Operator
Car &Car::operator=(Car &&other)
{
    if (this != &other)
    {
        delete[] brand;
        delete mileage;

        brand = other.brand;
        year = other.year;
        mileage = other.mileage;

        // Reset the other object
        other.brand = nullptr;
        other.mileage = nullptr;
    }
    return *this;
}

// Display information
void Car::displayInfo() const
{
    std::cout << "Brand: " << (brand ? brand : "?") << ", Year: " << year << ", Mileage: "
              << (mileage ? std::to_string(*mileage) + " km" : "?") << std::endl;
}
