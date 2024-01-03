#!/usr/bin/python3

def islower(c):
    try:
        return c == c.lower() and c.isalpha()
    except AttributeError;
         raise TypeError("Input must be a string")

