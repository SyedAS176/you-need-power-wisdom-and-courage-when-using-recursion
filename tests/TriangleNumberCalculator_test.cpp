#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/TriangleNumberCalculator.hpp"

using namespace std;

TEST_CASE("Calculates the triangle numbers") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.value(0) == 0);
    REQUIRE(calc.value(1) == 1);
    REQUIRE(calc.value(2) == 3);
    REQUIRE(calc.value(3) == 6);
    REQUIRE(calc.value(4) == 10);
    REQUIRE(calc.value(5) == 15);
}

TEST_CASE("Testing add() method") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.add(1, 1) == 2);
    REQUIRE(calc.add(2, 3) == 9);
    REQUIRE(calc.add(4, 2) == 13);
}

TEST_CASE("Testing subtract() method") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.subtract(1, 1) == 0);
    REQUIRE(calc.subtract(2, 3) == -3);
    REQUIRE(calc.subtract(4, 2) == 7);
}

TEST_CASE("Testing multiply() method") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.multiply(1, 1) == 1);
    REQUIRE(calc.multiply(2, 3) == 18);  // 3 * 6
    REQUIRE(calc.multiply(4, 2) == 30);  // 10 * 3
}

TEST_CASE("Testing divide() method") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.divide(4, 2) == (10.0 / 3.0));
    REQUIRE(calc.divide(3, 1) == (6.0 / 1.0));
}

TEST_CASE("Testing sequence() method") {
    TriangleNumberCalculator calc;

    vector<int> expected = {1, 3, 6, 10, 15};
    REQUIRE(calc.sequence(5) == expected);

    REQUIRE(calc.sequence(1) == vector<int>{1}); // 1 has a sequence of 1
}