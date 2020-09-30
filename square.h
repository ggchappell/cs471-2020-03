// square.h
// Glenn G. Chappell
// 2020-09-30
//
// For CS 471 Fall 2020
// Header for function template square
// There is no associated source file.

#ifndef FILE_SQUARE_H_INCLUDED
#define FILE_SQUARE_H_INCLUDED


template<typename Num>
Num square(const Num & x)
{
    return x*x;
}


#endif //#ifndef FILE_SQUARE_H_INCLUDED

