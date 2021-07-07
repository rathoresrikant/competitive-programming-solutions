#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the pangrams function below.
def pangrams(s):
    s=s.lower() 
    r=set(s)
    z=0
    x=len(r)
    for i in r:
        if(i.isalpha()):
            z=z+1
            

    if(z>=26):
        return("pangram")
    else:
        return("not pangram")
  
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
