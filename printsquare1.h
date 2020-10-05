// printsquare1.h
// Glenn G. Chappell
// 2020-10-02
// Header for function printSquare, VERSION 1

#ifndef FILE_PRINTSQUARE1_H_INCLUDED
#define FILE_PRINTSQUARE1_H_INCLUDED

#include <string>    // For std::string, std::to_string
#include <iostream>  // For std::cout, std::endl;


// printSquare
// Takes an int and pretty-prints its square to cout, surrounded by a
// rectangle of asterisks, ending with a newline.
inline
void printSquare(int n)
{
    std::string squarestr = std::to_string(n*n);
    std::string asterstr(squarestr.size()+4, '*');
    std::string blankstr(squarestr.size()+2, ' ');

    std::cout << asterstr << std::endl;
    std::cout << "*" << blankstr << "*" << std::endl;
    std::cout << "* " << squarestr << " *" << std::endl;
    std::cout << "*" << blankstr << "*" << std::endl;
    std::cout << asterstr << std::endl;
}


#endif //#ifndef FILE_PRINTSQUARE1_H_INCLUDED

