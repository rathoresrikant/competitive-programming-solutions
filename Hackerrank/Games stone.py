#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the gemstones function below.
def gemstones(arr):

   
    list1=arr[0]
    list2=arr[1]
    i=2
    z=list(set(list1).intersection(list2))
    while i<len(arr):
       
        
        
        z=list(set(z).intersection(arr[i]))
        i=i+1
    return len(z)

 
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = []

    for _ in range(n):
        arr_item = input()
        arr.append(arr_item)

    result = gemstones(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
