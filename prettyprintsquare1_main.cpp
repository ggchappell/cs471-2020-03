// prettyprintsquare1_main.cpp
// Glenn G. Chappell
// 2020-10-02
// Simple main program for function prettyPrintSquare, VERSION 1


#include "prettyprintsquare1.h"
#include <iostream>
using std::cout;
using std::endl;


int main()
{
    cout << "Calling prettyPrintSquare" << endl;

    int n = 12;
    cout << endl;
    cout << "Parameter: " << n << endl;
    prettyPrintSquare(n);

    n = 100;
    cout << endl;
    cout << "Parameter: " << n << endl;
    prettyPrintSquare(n);
}

