#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ma,ans,x;
    scanf("%d %d",&a,&b);
    if(a>=b)
        ma=a;
    else
        ma=b;
    ans=6-ma+1;
    x=__gcd(ans,6);
    printf("%d/%d",(ans/x),(6/x));
}
