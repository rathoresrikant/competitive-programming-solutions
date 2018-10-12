#!/bin/python

# https://www.hackerrank.com/challenges/picking-numbers/problem
# Compiles in Python 2.7

import math
import os
import random
import re
import sys

def pickingNumbers(a):
    result = 0
    for value in a:
        cnt_value = a.count(value) + a.count(value + 1)
        if(result < cnt_value):
            result = cnt_value
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input().strip())

    a = map(int, raw_input().rstrip().split())

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
