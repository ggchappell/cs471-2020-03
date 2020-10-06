// printsquare2.h
// Glenn G. Chappell
// Started: 2020-10-02
// Updated: 2020-10-05
// Header for function printSquare, VERSION 2

#ifndef FILE_PRINTSQUARE2_H_INCLUDED
#define FILE_PRINTSQUARE2_H_INCLUDED

#include <string>    // For std::string, std::to_string
#include <iostream>  // For std::cout, std::endl;


// class Squarer
// Has member func compute, which computes a square. Intended to be
// passed to stringSquare, as a Computer object.
class Squarer {
public:

    int compute(int n) const
    {
        return n*n;
    }
};


// stringSquare
// Takes an int and returns a string containing the square of the int
// surrounded by a rectangle of asterisks, ending with a newline.
template<typename Computer>
std::string stringSquare(int n,
                         Computer && c)  // Universal reference
{
    int numresult = c.compute(n);
    std::string squarestr = std::to_string(numresult);
    std::string asterstr(squarestr.size()+4, '*');
    std::string blankstr(squarestr.size()+2, ' ');

    std::string result;
    result += asterstr + "\n";
    result += "*" + blankstr + "*\n";
    result += "* " + squarestr + " *\n";
    result += "*" + blankstr + "*\n";
    result += asterstr + "\n";

    return result;
}


// printSquare
// Takes an int and pretty-prints its square to cout, surrounded by a
// rectangle of asterisks, ending with a newline.
inline
void printSquare(int n,
                 std::ostream & out = std::cout)
{
    out << stringSquare(n, Squarer());
}


#endif //#ifndef FILE_PRINTSQUARE2_H_INCLUDED

