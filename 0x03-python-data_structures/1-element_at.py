#!/usr/bin/python3

def element_at(my_list, idx):
    if idx < 0:
        return None
    count = 0
    for item in my_list:
        if count == idx:
            return item
        count += 1
    return None

