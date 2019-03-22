#define CATCH_CONFIG_MAIN

#include "Number.h"
#include "catch.hpp"

TEST_CASE("Prime Check")
{
	
	Number number;
	REQUIRE(number.isPrime(4) == false);
	REQUIRE(number.isPrime(7) == true);
	REQUIRE(number.isPrime(9) == false);
	REQUIRE(number.isPrime(1) == false);
	REQUIRE(number.isPrime(0) == false);
	REQUIRE(number.isPrime(-2) == false);
}