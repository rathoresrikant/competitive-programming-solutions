#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);
    for(i=3;i<=n;i++)
    {
        sum=sum+(i)*(i-1);
    }
    printf("%lld\n",sum);
}
