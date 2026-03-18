#pragma once
#include <iosfwd>

class Point {
    friend std::ostream& operator<< (std::ostream& os, const Point& p);

    double x;
    double y;
public:
    Point(double x, double y);
    double operator- (const Point& p) const;
    bool operator== (const Point& p) const;
    bool operator!= (const Point& p) const;
    Point operator/ (const Point& p) const;

    template <typename T>
    Point operator* (T number) const {
        return Point(x * number, y * number);
    }

    double operator[] (const char& c) const;
};
