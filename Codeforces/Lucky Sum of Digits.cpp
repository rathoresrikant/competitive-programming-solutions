#include<stdio.h>
int main()
{
    int n,i,c=0,x,y;
        c=0;
    scanf("%d",&n);
    while(n%4!=0 && n>=0)
    {
        n=n-7;
        c++;
    }
    if(n<0)
        printf("-1\n");
    else
    {
      x=n/4;
      y=x/7;
      x=x-7*y;
      c=c+4*y;
      for(i=0;i<x;i++)
            printf("4");
      for(i=0;i<c;i++)
        printf("7");
    }

}
