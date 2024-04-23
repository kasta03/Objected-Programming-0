// #pragma once

// #include <iostream>
// #include <string>
// #include <cstring>

// class Car
// {
//     int *_mileage;
//     int _year;
//     char* _brand;

//     public:
//     //konstruktor
//     Car(char* brand, int year, int mileage);
//     //konstruktor kopiujacy
//     Car(const Car& other);
//     //konstruktor przenoszacy
//     Car(Car&& other) noexcept;
//     //operator przypisania przenoszacego
//     Car& operator=(const Car& other);
//     //destruktor
//     ~Car();

//     //wyswietla dane
//     void displayInfo() const;
// };

#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
private:
    char *brand;
    int year;
    int *mileage; // Using a pointer for dynamic allocation

public:
    // Constructor
    Car(const char *brand, int year, int mileage);

    // Copy Constructor
    Car(const Car &other);

    // Move Constructor
    Car(Car &&other) noexcept;

    // Destructor
    ~Car();

    // Copy Assignment Operator
    Car &operator=(const Car &other);

    // Move Assignment Operator
    Car &operator=(Car &&other);

    // Display information
    void displayInfo() const;

    Car createCar()
    {
        return Car("Toyota", 2022, 15000);
    }
};

#endif // CAR_H
