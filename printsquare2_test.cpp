// printsquare_test.cpp
// Glenn G. Chappell
// Started: 2020-10-05
// Updated: 2020-10-07
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


class StringifierMock {
public:

    string stringify(const string & instr) const
    {
        return instr;
    }
};


TEST_CASE("Function stringIt computes a square correctly")
{
    int n = -13;
    string expected = "169";
    CHECK( stringIt(n, Squarer(), StringifierMock()) == expected);
}


class ComputerMock {
public:

    int compute(int n) const
    {
        return n;
    }
};


TEST_CASE("Function stringIt surrounds a string with asterisks correctly")
{
    int n = 123;
    string expected = "*******\n*     *\n* 123 *\n*     *\n*******\n";
    CHECK( stringIt(n, ComputerMock(), Asterizer()) == expected);
}

