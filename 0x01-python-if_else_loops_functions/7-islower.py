#!/usr/bin/python3

def islower(c):
    if c == c.lower():
        return True
    else:
        return False
print("'' => {}".format("lower" if islower('') else "upper"))
print("'4' => {}".format("lower" if islower('4') else "upper"))
print("'!' => {}".format("lower" if islower('!') else "upper"))
print()