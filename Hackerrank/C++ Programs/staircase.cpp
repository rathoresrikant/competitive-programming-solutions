/*https://www.hackerrank.com/challenges/staircase/problem*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
     int sp=n-1;
    int s,i,j;
    for(int i=0;i<n;i++)   
     {   
      for(int s=0;s<sp;s++)
         { printf(" ");
         }
       for(int j=0;j<=i;j++)
        {
        printf("#");
        
       }
        printf("\n");
        sp--;
    
    }
    return 0;
}