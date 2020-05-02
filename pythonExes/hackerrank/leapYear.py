import numpy as np
import math
def is_leap(year):
    leap = False
    if year%400==0 or year%4==0 and year%100 != 0:
        leap = True
    return print(leap)

year = int(input())
print(is_leap(year))
