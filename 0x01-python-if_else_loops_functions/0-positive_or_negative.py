#!/usr/bin/python3
import random

random_number = random.randint(-10, 10)

if random_number > 0:
    print(random_number, "is positive")
    print()
elif random_number == 0:
    print(random_number, "is zero")
    print()
else:
    print(random_number, "is negative")
    print()
