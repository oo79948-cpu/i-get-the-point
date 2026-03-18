
#include "point.hpp"
#include <complex>
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::operator-(const Point &p) const {
    return std::sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

bool Point::operator==(const Point &p) const {
    return x == p.x && y == p.y;
}

bool Point::operator!=(const Point &p) const {
    return x != p.x && y != p.y;
}

Point Point::operator/(const Point &p) const {
    return {(x + p.x) / 2, (y + p.y) / 2};
}

std::ostream& operator<< (std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

double Point::operator[] (const char& c) const {
    if (c == 'x') return x;
    if (c == 'y') return y;
    throw std::out_of_range("Allowed values are 'x' and 'y'");
}
