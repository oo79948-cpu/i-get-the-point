#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>

#include "../src/point.hpp"

#include <iostream>

#include "catch2/internal/catch_stdstreams.hpp"

TEST_CASE("checks the creation of a point") {
    Point point(0,0);
}

TEST_CASE( "checks the equivalency of two points" ) {
    Point point1(0,0);
    Point point2(0,0);
    REQUIRE(point1 == point2);
}

TEST_CASE( "checks the inequivalency of two points" ) {
    Point point1(0,1);
    Point point2(1,0);
    REQUIRE(point1 != point2);
}

TEST_CASE( "checks the distance of two points" ) {
    Point point1(0,0);
    Point point2(4,0);
    double distance = 4;

    REQUIRE((point1 - point2) == distance);
}

TEST_CASE( "checks the midpoint of two points" ) {
    Point point1(3,3);
    Point point2(1,1);
    Point result(2, 2);

    REQUIRE((point1 / point2) == result);
}

TEST_CASE( "checks the printing of a point" ) {
    Point point1(4.35,4.3);
    std::cout << point1 << std::endl;
}

TEST_CASE( "checks the multiplication of a point and int" ) {
    Point point(1,2);
    Point result(4,8);
    int mult = 4;

    REQUIRE((point * mult) == result);
}

TEST_CASE( "checks the multiplication of a point and float" ) {
    Point point(8,2);
    Point result(16,4);
    float mult = 2.0f;

    REQUIRE((point * mult) == result);
}

TEST_CASE( "checks the multiplication of a point and double" ) {
    Point point(2,2);
    Point result(9,9);
    double mult = 4.50;

    REQUIRE((point * mult) == result);
}

TEST_CASE( "checks the array subscript operator of a point" ) {
    Point point(6,7);

    REQUIRE(point['x'] == 6);
    REQUIRE(point['y'] == 7);
}

TEST_CASE( "checks the array subscript operator of a point throws an exception" ) {
    Point point(6,7);
    CHECK_THROWS(point['z']);
}
