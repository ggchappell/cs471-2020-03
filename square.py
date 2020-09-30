#!/usr/bin/env python3
# square.py
# Glenn G. Chappell
# 2020-09-28
#
# For CS 471 Fall 2020
"""Function 'square`: example of doctests.
"""

# Note. Lines beginning ">>>" are doctests. If a command-line interface
# is available, then these can be executed by doing the following:
#
#     python3 -m doctest square.py
#
# When doing the above, only the results of failing tests are printed.
# Thus, no output is GOOD. To get the results of ALL tests, add "-v"
# (for "verbose"):
#
#     python3 -m doctest square.py -v


def square(x):
    """x -> x squared.

    >>> square(5)
    25
    >>> square(-1)
    1

    """
    return x*x


# Main program
# If this module is executed as a program (instead of being imported):
# print a message.
if __name__ == "__main__":
    print("The module in file 'square.py' is not primarily intended")
    print("to be run as a complete program. Rather, it is an example")
    print("showing how to write and run doctests using the Python")
    print("'doctest' module.")

