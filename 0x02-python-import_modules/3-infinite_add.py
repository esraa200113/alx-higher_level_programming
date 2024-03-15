#!/usr/bin/python3
import sys

if __name__ == "__main__":
    # Skip the first argument (script name) and convert the rest to integers
    numbers = [int(arg) for arg in sys.argv[1:]]

    # Calculate the sum of all numbers
    total = sum(numbers)

    # Print the result
    print(total)

