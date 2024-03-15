#!/usr/bin/python3
"""
This program imports functions from calculator_1.py,
does some Math, and prints the result.
"""

# Define variables a and b
a = 10
b = 5

# Import functions from calculator_1.py
from calculator_1 import add, sub, mul, div

# Perform addition
addition_result = add(a, b)
# Perform subtraction
subtraction_result = sub(a, b)
# Perform multiplication
multiplication_result = mul(a, b)
# Perform division
division_result = div(a, b)

# Print the results
print("{} + {} = {}".format(a, b, addition_result))
print("{} - {} = {}".format(a, b, subtraction_result))
print("{} * {} = {}".format(a, b, multiplication_result))
print("{} / {} = {}".format(a, b, division_result))

