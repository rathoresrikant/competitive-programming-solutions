#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,j,t;
    scanf("%d",&t);
    while(t--)
    {
 
    int n,b,i,a=0;
 
 
    scanf("%d",&b);
    int h[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&h[i]);
 
 
    }
     if(b%2!=1)
        a=1;
     else
        {
            if(h[0]!=1 && h[b-1]!=1)
            a=1;
 
           else{
            for(i=0;i<=b/2;i++)
            {
                if(h[i]!=i+1)
                a=1;
            }
            for(i=b/2 +1;i<b;i++)
            {
                if(h[i]!=b-i)
                a=1;
            }
        }
        }
    if(a==0)
        printf("yes\n");
    else
        printf("no\n");
 
    }
return 0;
    }
