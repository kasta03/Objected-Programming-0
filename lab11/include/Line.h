#pragma once
#include <iostream>
#include <array>

class LPrint;
class LArray;

class Line
{
    friend class LPrint;
    double _slope;
    double _shift;
    public:

    Line();
    Line(double x);


    double operator()(double x)
    {
        return _slope*x + _shift;
    }
    double X0()
    {
        return -(_shift/_slope);
    }
};


class LArray
{
    public:
    int size;
    Line* arr;

    LArray(int size)
    {
        arr = new Line[size];
    }
    ~LArray()
    {
        delete []arr;
    }
    void Add(Line object)
    {
        arr[0] = object;
    }
    LArray& Add(int x)
    {
        Add(Line(x));
        return *this;
    }
    Line& operator [](int i)
    {
        return arr[i + 1];
    }
};


class LPrint
{
    Line _object;

    public:
    LPrint() {}
    LPrint(Line& object) : _object(object) {}
    void operator()(Line& object)
    {
        std::cout << "y1 = x* " << object._slope << " + " << object._shift << "  x0 = " << object.X0() << std::endl;
    }
    void operator()(LArray& object)
    {
        for (int i = 0; i < 3; ++i)
        {
        std::cout << "[0] y1 = x* " << object.arr[i]._slope << " + " << object.arr[i]._shift << "  x0 = " << object.arr[i].X0() << std::endl;
        }
    }
};


// #pragma once 
// #include <iostream>
// #include <array>
// #include <vector>

// class Line
// {
//     double _slope;
//     double _shift;

//     public:
//     Line():_slope(1), _shift(1){}
//     Line(double x)
//     {
//     _slope = x;
//     _shift = _slope;
//     }

    
//     double operator ()(double x)
//     {
//         return x*_slope + _shift;
//     }

//     double X0()
//     {
//         return -(_shift/_slope);
//     }
//     double get_slope()
//     {
//         return _slope;
//     }
//     double get_shift()
//     {
//         return _shift;
//     }
// };

// class LPrint
// {
//     Line _line;

//     public:
//     LPrint(): _line() {}
//     void operator ()(Line& obj)
//     {
//         std::cout << "y = " << obj.get_slope() << " * x + " << obj.get_shift() << std::endl;
//     }
    
// };