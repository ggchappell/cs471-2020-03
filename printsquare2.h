// printsquare2.h
// Glenn G. Chappell
// Started: 2020-10-02
// Updated: 2020-10-07
// Header for function printSquare, VERSION 2

#ifndef FILE_PRINTSQUARE2_H_INCLUDED
#define FILE_PRINTSQUARE2_H_INCLUDED

#include <string>    // For std::string, std::to_string
#include <iostream>  // For std::cout, std::endl;


// class Squarer
// Has member func compute, which computes a square. Intended to be
// passed to stringIt, as a Computer object.
class Squarer {
public:

    int compute(int n) const
    {
        return n*n;
    }
};


// Class Asterizer
// Has member func stringify, which takes a string (assumed to contain
// no newlines) and returns a multi-line string that is the given string
// surrounded by a rectangle of asterisks. Intended to be passed to
// stringIt, as a Stringifier object.
class Asterizer {
public:

    std::string stringify(const std::string & instr) const
    {
        std::string asterstr(instr.size()+4, '*');
        std::string blankstr(instr.size()+2, ' ');

        std::string result;
        result += asterstr + "\n";
        result += "*" + blankstr + "*\n";
        result += "* " + instr + " *\n";
        result += "*" + blankstr + "*\n";
        result += asterstr + "\n";

        return result;
    }
};


// stringIt
// Takes an int and returns a string containing the square of the int
// surrounded by a rectangle of asterisks, ending with a newline.
template<typename Computer,
         typename Stringifier>
std::string stringIt(int n,
                     Computer && c,     // Universal reference
                     Stringifier && s)  // Universal reference
{
    int numresult = c.compute(n);
    std::string numstr = std::to_string(numresult);
    std::string result = s.stringify(numstr);
    return result;
}


// printSquare
// Takes an int and pretty-prints its square to cout, surrounded by a
// rectangle of asterisks, ending with a newline.
inline
void printSquare(int n,
                 std::ostream & out = std::cout)
{
    out << stringIt(n, Squarer(), Asterizer());
}


#endif //#ifndef FILE_PRINTSQUARE2_H_INCLUDED

