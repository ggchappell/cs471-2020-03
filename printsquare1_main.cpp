// printsquare1_main.cpp
// Glenn G. Chappell
// 2020-10-02
// Simple main program for function printSquare, VERSION 1


#include "printsquare1.h"
#include <iostream>
using std::cout;
using std::endl;


int main()
{
    cout << "Calling printSquare" << endl;

    int n = 12;
    cout << endl;
    cout << "Parameter: " << n << endl;
    printSquare(n);

    n = 100;
    cout << endl;
    cout << "Parameter: " << n << endl;
    printSquare(n);
}

