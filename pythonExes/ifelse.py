#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Sep  2 14:01:34 2019

@author: vireakyim
"""

import math
import os
import re
import random

print("Enter something below and do something to finish!")
total=0
count=0

while True:
    try:
        line = input("Enter more: ")
        if line:
            number = int(line)
            total += number
            count += 1
    except ValueError as err:
        print(err)
        continue
    except EOFError:
        break
if count:
    print("count=", count, "total=", total, "mean=", total/count)