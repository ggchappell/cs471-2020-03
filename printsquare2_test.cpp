// printsquare2_test.cpp
// Glenn G. Chappell
// Started: 2020-10-05
// Updated: 2020-10-09
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


TEST_CASE("Class Squarer works")
{
    int n = 17;
    CAPTURE(n);
    int expected = n*n;
    const Squarer s;
    int result = s.compute(n);
    CHECK( result == expected );
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
    // Arrange
    int n = 123;
    string expected = "*******\n*     *\n* 123 *\n*     *\n*******\n";

    // Act
    string result = stringIt(n, ComputerMock(), Asterizer());

    // Assert
    CHECK( result == expected);
}


TEST_CASE("Class Asterizer works")
{
    // Arrange
    string instr = "abcd";
    string expected = "********\n*      *\n* abcd *\n*      *\n********\n";
    const Asterizer a;

    // Act
    string result = a.stringify(instr);

    // Assert
    CHECK( result == expected );
}

