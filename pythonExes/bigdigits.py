import numpy as np
import random
import sys
zero = ["z","e","r", "o"]
one =["o","n","e","s"]
two =["t","w","o","s"]
three =["t","h","r","e"]
four =["f","o","u","r"]
five =["f","i","v", "e"]
six =["s","i","x", "y"]
seven =["s","e","v","e"]
eight =["e","i","g","h"]
nine = ["n","i","n","e"]
Digits = [zero, one, two, three, four, five, six, seven, eight, nine]
try:
    digits = sys.argv[1]
    row = 0
    while row < 5:
        line = ""
        column = 0
        while column < len(digits):
            number = int(digits[column])
            digit = Digits[number]
            line += digit[row] + "-"
            column += 1
        print(line)
        row += 1
except IndexError:
    print("usage: bigdigits.py <number>")
except ValueError as err:
    print(err, "in", digit)

