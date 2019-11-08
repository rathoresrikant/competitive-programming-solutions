#include<stdio.h>
int main()
{
    long long int n,m,sum=0,i;
    long long int a[100005];
    scanf("%lld %lld",&n,&m);
    scanf("%lld",&a[0]);
    sum=sum+(a[0]-1);
    for(i=1;i<m;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>a[i-1])
            sum=sum+(a[i]-a[i-1]);
        else if(a[i]<a[i-1])
            sum=sum+(n-a[i-1]+a[i]);
    }
    printf("%lld\n",sum);
}
