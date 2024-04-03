#!/usr/bin/python3

def safe_print_integer(value):
    try:
        print("{:d}".format(value))
        return True
    except (ValueError, TypeError):
        return False

# Test the function
if __name__ == "__main__":
    value = 89
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = -89
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = "89"
    print("Correct output - case: value = '{}'".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = '89'
    print("Correct output - case: value = '{}'".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = 89.9
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = 0
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = None
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

    value = [89]
    print("Correct output - case: value = {}".format(value))
    has_been_print = safe_print_integer(value)
    if not has_been_print:
        print("{} is not an integer".format(value))

