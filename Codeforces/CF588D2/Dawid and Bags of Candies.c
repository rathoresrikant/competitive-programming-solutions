// Problem Link: https://codeforces.com/contest/1230/problem/A

#include<stdio.h>


int main()
{
        long long int a[4],t;
        scanf("%lld %lld %lld %lld",a,a+1,a+2,a+3);

        for(int i=0;i<3;i++)
        {
                int min=i;
                for(int j=i;j<4;j++)
                {
                        if(a[j]<a[min])
                                min=j;
                }

                t=a[i];
                a[i]=a[min];
                a[min]=t;
        }

        if(a[0]+a[1]+a[2]==a[3])
                printf("YES\n");
        else if(a[0] +a[3]==a[1]+a[2])
                printf("YES\n");
        else if(a[1] +a[3]==a[0]+a[2])
                printf("YES\n");
        else if(a[2] +a[3]==a[1]+a[0])
                printf("YES\n");
        else
                printf("NO\n");
        return 0;
}
