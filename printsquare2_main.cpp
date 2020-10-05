// printsquare2_main.cpp
// Glenn G. Chappell
// 2020-10-02
// Simple main program for function printSquare, VERSION 2


#include "printsquare2.h"
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

