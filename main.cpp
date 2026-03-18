
#include <iostream>
#include "src/point.hpp"

int main() {
    Point p1 = Point(3.2, 9.8);
    Point p2 = Point(5.5, -1.2);

    std::cout << p1 - p2 << std::endl;
    std::cout << (p1 == p2) << std::endl;
    std::cout << (p1 != p2) << std::endl;
    std::cout << p1 / p2 << std::endl;

    Point p3 = Point(3.2, 9.8);
    std::cout << p3 * 2 << std::endl;
    std::cout << p3 * 2.0 << std::endl;
    std::cout << p3 * -3 << std::endl;

    Point p4 = Point(3.2, 9.8);
    double my_x = p4['x'];
    double my_y = p4['y'];
    std::cout << my_x << std::endl;
    std::cout << my_y << std::endl;

    // Point a = Point(1, 2);
    // Point b = Point(2, 1);
    // Point c = Point(2, 2);
    // if (c > b) std::cout << "wow" << std::endl;
}
