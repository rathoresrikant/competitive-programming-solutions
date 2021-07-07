#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the marsExploration function below.
def marsExploration(s):
    
    
    z=0
    x= str("SOS"*(len(s)//3))
  
    for i in range(len(s)):
        if s[i] ==x[i]:
            z=z+1
    return (len(s)-z)      

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = marsExploration(s)

    fptr.write(str(result) + '\n')

    fptr.close()
