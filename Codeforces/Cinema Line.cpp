#include<stdio.h>
int main()
{
    int n,i,k=1,a,sum=0,sum1=0,x;
    scanf("%d",&n);
   // printf("hello\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==25)
        sum++;
        if(a==50)
        sum1++;
        x=a-25;
        if(x==25 && sum>=1)
        {
         sum--;
        }
        else if(x==50 && (sum1>=1 || sum>=2))
            {
                if(sum1>=1)
                    sum1--;
                else if(sum>=2)
                    sum=sum-2;
            }
        else if(x==75 && ((sum1>=1 && sum>=1)|| sum>=3))
        {
            if(sum1>=1 && sum>=1)
            {
                sum1--;
                sum--;
            }
            else if(sum>=3)
                sum=sum-3;
        }
        else if(x==0)
        {

        }
      else
      {

          k=0;
          break;
      }
       //printf("%d %d    %d\n",sum,sum1,x);

    }
    if(k==0)
        printf("NO\n");
    else
        printf("YES\n");
}
