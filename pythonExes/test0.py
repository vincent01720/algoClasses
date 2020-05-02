import numpy as np
import math
n1 = 101
# while n1<1 or n1 > 100:
#     n1 = int(input("Enter a number btween : "))
n1 = int(input("Enter a number btween : "))
if n1>=1 and n1 <= 100:
    if n1%2>0:
        print("Weird")
    else:
        if n1>=2 and n1<=5:
            print("Not Weird")
        elif n1>=6 and n1<=20:
            print("Weird")
        elif n1>20:
            print("Not Weird")
else:
    print("Within constraints! Try again!")


