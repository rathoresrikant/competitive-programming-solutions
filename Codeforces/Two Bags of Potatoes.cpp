#include<bits/stdc++.h>
int main()
{
    long long int y,n,k,x,i,c=0;
    scanf("%lld %lld %lld",&y,&k,&n);
    x=ceil((1.0*y)/k)*k;
    for(i=x;i<=n;i=i+k)
    {
        if((i-y)>0)
       {printf("%lld ",(i-y));
       c++;}

    }
    if(c==0)
    printf("-1\n");
}
