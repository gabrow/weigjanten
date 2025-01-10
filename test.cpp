#define CATCH_CONFIG_MAIN
#include "func.h"
#include <catch2/catch_test_macros.hpp>

unsigned int factorial(unsigned int n);

TEST_CASE("Factorial function tests", "[factorial]") {
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(4) == 24);
    REQUIRE(factorial(10) == 3628800);
}