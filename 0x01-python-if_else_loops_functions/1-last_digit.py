#!/usr/bin/python3
import random

number = random.randint(-10000, 10000)

# Extract the last digit and its sign
last_digit = abs(number) % 10
last_digit_sign = -1 if number < 0 else 1 if number > 0 else 0

print(f"Last digit of {number} is {last_digit_sign * last_digit} and is ", end="")

if last_digit > 5:
    print("greater than 5")
elif last_digit == 0:
    print("0")
else:
    print("less than 6 and not 0")
