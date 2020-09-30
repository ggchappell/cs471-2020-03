// square_test.cpp
// Glenn G. Chappell
// 2020-09-30
//
// For CS 471 Fall 2020
// Test program for function template square
// Uses the "doctest" unit-testing framework, version 2
// Requires doctest.h, square.h

#include "square.h"          // For square
#include "square.h"          // Double-inclusion check, for testing only

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
                             // doctest writes main for us
#include "doctest.h"         // For doctest


TEST_CASE( "Function square has correct return values" )
{
    REQUIRE( square(5) == 25 );
    REQUIRE( square(-1) == 1 );
}

