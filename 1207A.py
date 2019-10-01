 # ///==========Libraries, Constants and Functions=============///
#mkraghav
import sys
 
inf = float("inf")
mod = 1000000007
 
 
def get_array(): return list(map(int, sys.stdin.readline().split()))
 
 
def get_ints(): return map(int, sys.stdin.readline().split())
 
 
def input(): return sys.stdin.readline()
 
def int1():return int(input())
 
import string
 
import math
 
 
from itertools import combinations
# ///==========MAIN=============///
 
 
def main():
    t=int1()
    while t>0:
 
        b,p,f=get_array()
        h,c=get_array()
        s=0
        if h>c:
            r1=min(b//2,p)
            s=s+r1*h
            b=b-2*r1
            r=min(b//2,f)
            s=s+r*c
 
 
 
        else:
            r3=min(b//2,f)
            s=s+r3*c
            b=b-2*r3
            r4=min(b//2,p)
            s=s+r4*h
 
 
        print(s)
        t=t-1
 

 
 
 
if __name__ == "__main__":
    main()
