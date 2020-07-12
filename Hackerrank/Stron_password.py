#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumNumber function below.
def minimumNumber(n, password):
    a = flag1 = flag2 = flag3 = flag4 = 0
    numbers = "0123456789"
    lower_case = "abcdefghijklmnopqrstuvwxyz"
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    special_characters = "!@#$%^&*()-+"
    for i in numbers:
        if(i in password):
            flag1 = 1
    for i in lower_case:
        if(i in password):
            flag2 = 1
    for i in upper_case:
        if(i in password):
            flag3 = 1
    for i in special_characters:
        if(i in password):
            flag4 = 1
    if(flag1 == 0):
        a+=1
    if(flag2 == 0):
        a+=1
    if(flag3 == 0):
        a+=1
    if(flag4 == 0):
        a+=1
    if((n + a) < 6):
        a+=(6-n - a)
        
    return a


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    password = input()

    answer = minimumNumber(n, password)

    fptr.write(str(answer) + '\n')

    fptr.close()

