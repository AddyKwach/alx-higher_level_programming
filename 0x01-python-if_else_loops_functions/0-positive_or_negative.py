#!/usr/bin/python3
import random

random_number = random.randint(-10, 10)

print(f"{random_number} ", end="")

if random_number > 0:
    print("is positive\n")
elif random_number == 0:
    print("is zero\n")
else:
    print("is negative\n")
