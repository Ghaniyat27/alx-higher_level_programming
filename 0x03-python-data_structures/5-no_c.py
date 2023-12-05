#!/usr/bin/python3
# 5-no_c.py
def no_c(my_string):
    new_string = ""
    for elements in my_string:
        if elements != "c" and elements != "C":
            new_string += elements
    return new_string
