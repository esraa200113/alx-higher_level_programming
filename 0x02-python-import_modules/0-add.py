#!/usr/bin/python3

"""
This program imports the add function from add_0.py and prints the result of the addition 1 + 2 = 3.
"""

# Define a and b
a = 1
b = 2

# Import the add function from add_0.py
from add_0 import add

# Calculate the result
result = add(a, b)

# Print the result using string formatting
print("{} + {} = {}".format(a, b, result))

