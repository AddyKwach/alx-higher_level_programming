#!/usr/bin/python3
from sys import argv

if __name__ == "__main__":
    num_args = len(argv) - 1

    if num_args == 1:
        print(f"{num_args} argument", end=":")
    elif num_args == 0:
        print(f"{num_args} arguments", end=".")
    else:
        print(f"{num_args} arguments", end=":")

    for i in range(num_args):
        print(f"{i + 1}: {argv[i + 1]}")
