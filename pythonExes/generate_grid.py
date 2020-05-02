import random
import numpy as np

def get_int(msg, minim, min_defaults):
    while True:
        try:
            i = input(msg)
            if not i and min_defaults is not None:
                return min_defaults
            i = int(i)
            if i<minim:
                print("Out of bounds, try again!")
            else:
                return int(i)   
        except ValueError as err:
            print(err)



i = get_int("Enter an integer: ", -50, 100)
print(i)