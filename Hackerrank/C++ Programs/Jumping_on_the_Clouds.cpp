#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     int n; scanf("%d",&n); int *c = malloc(sizeof(int) * n); for(int c_i = 0; c_i < n; c_i++){ scanf("%d",&c[c_i]); }
int jump = 0;
int count = 0;
while(jump < (n-1))
{

    if(((jump+2) < n) && (c[jump+2] == 0))
    {
        count++;
        jump = jump+2;
    }
    else if(((jump+1) < n) && (c[jump+1] == 0))
    {
        count++;
        jump = jump+1;
    }

}
printf("%d\n",count);
    return 0;
}
