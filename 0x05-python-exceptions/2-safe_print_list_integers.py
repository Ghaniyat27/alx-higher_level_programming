#!/usr/bin/python3
# 2-safe_print_list_integers.py
def safe_print_list_integers(my_list=[], x=0):
    count = 0

    for i in range(x):
        try:
            print("{:d}".format(my_list[i]), end='')
        except TypeError:
            pass
        except ValueError:
            pass
        else:
            count += 1

    print()
    return (count)
