#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,ma=-1,c=0,mac=-1,i;
long long int a[100002];
scanf("%lld",&n);
for(i=0;i<n;i++)
{
    scanf("%lld",&a[i]);
    if(a[i]>ma)
        ma=a[i];
}
for(i=0;i<n;i++)
{
    if(a[i]==ma)
    {
        c++;
    }
    else
        c=0;
    if(c>mac)
        mac=c;
}
printf("%lld\n",mac);
}
