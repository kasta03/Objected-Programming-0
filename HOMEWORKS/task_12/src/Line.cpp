#include "Line.h"

Line::Line(double a, double b) : a(a), b(b) {}

double Line::operator()(double x) const {
    return a * x + b;
}

double Line::X0() const {
    if (a != 0.0)
        return -b / a;
    return 0.0; // Handle division by zero
}

void LPrint::operator()(const Line& line) const {
    std::cout << "y = " << line.X0() << "* x + " << line(0.0) << "\tx0 = " << line.X0() << std::endl;
}

LArray::LArray(size_t size) : lines(size) {}

void LArray::Add(const Line& line) {
    lines.push_back(line);
}

void LArray::Add(double a, double b) {
    lines.emplace_back(a, b);
}

const Line& LArray::operator[](size_t index) const {
    return lines[index];
}
