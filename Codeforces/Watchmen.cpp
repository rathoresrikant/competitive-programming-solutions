#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c=0,a,b,sum1=0,sum2=0,sum3=0;
    map<long long int,long long int>x;
    map<long long int, long long int>y;
    map<pair<long long int,long long int>,long long int>xy;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        x[a]++;
        y[b]++;
        xy[make_pair(a,b)]++;
    }
    for(auto const& xc:x)
    {
       sum1=sum1+(xc.second)*(xc.second-1)/2;
    }
    for(auto const& yc:y)
    {
       sum2=sum2+(yc.second)*(yc.second-1)/2;
    }
    for(auto xyc:xy)
    {
       sum3=sum3+(xyc.second)*(xyc.second-1)/2;
    }
    printf("%lld\n",(sum1+sum2-sum3));



}
