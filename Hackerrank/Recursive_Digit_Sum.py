#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superDigit function below.
def superDigit(n,k):
    l = len(n) #find the length of the string
    n1=int(n) #make the string integer
    sum = 0
    
    i=0
    while(i<l):
        sum = sum+int(n[i]) #traverse every element of the string n and add it to sum
        i=i+1
    n1 = sum * k
    sum= 0
    while(l != 1):
        while(n1!=0):
            n2 = n1 % 10
            
            sum = sum + n2
            
            n1 = int(n1 / 10)
            
        n1 = sum
        sum = 0
        l = len(str(n1))
    return n1
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()
