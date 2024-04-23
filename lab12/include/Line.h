#pragma once
#include <iostream>

class Line {
private:
    double a;
    double b;

public:
    Line(double _a, double _b) : a(_a), b(_b) {}

    double operator()(double x) const {
        return a * x + b;
    }

    double intersection_with_x_axis() const {
        return -b / a;
    }

    friend std::ostream& operator<<(std::ostream& os, const Line& line) {
        os << "y = " << line.a << "* x + " << line.b << "\t x0 = " << line.intersection_with_x_axis();
        return os;
    }
};
