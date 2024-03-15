#!/usr/bin/python3.8
import dis
import hidden_4

if __name__ == "__main__":
    # Get all attributes of the module
    attributes = dir(hidden_4)

    # Filter out names that do not start with '__'
    filtered_names = [name for name in attributes if not name.startswith('__')]

    # Sort the filtered names alphabetically
    sorted_names = sorted(filtered_names)

    # Print each name on a separate line
    for name in sorted_names:
        print(name)

