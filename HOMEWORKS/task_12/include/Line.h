#ifndef LINE_H
#define LINE_H

#include <iostream>
#include <vector>

class Line {
private:
    double a, b;

public:
    Line(double a = 1.0, double b = 1.0);
    double operator()(double x) const;
    double X0() const;
};

class LPrint {
public:
    void operator()(const Line& line) const;
};

class LArray {
private:
    std::vector<Line> lines;

public:
    LArray(size_t size);
    void Add(const Line& line);
    void Add(double a, double b);
    const Line& operator[](size_t index) const;
};

#endif // LINE_H
