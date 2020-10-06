// printsquare_test.cpp
// Glenn G. Chappell
// 2020-10-05
// Test program for function printSquare

#include "printsquare2.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <string>
using std::string;
#include <sstream>
using std::ostringstream;

TEST_CASE("Function printSquare works")
{
    SUBCASE( "Check printSquare with 12" )
    {
    ostringstream os1;
    printSquare(12, os1);
    string expected = "*******\n*     *\n* 144 *\n*     *\n*******\n";
    CHECK( os1.str() == expected );
    }

    SUBCASE( "Check printSquare with 100" )
    {
    ostringstream os1;
    printSquare(100, os1);
    string expected = string("*********\n*       *\n* 10000 *\n")
                    + "*       *\n*********\n";
    CHECK( os1.str() == expected );
    }
}

