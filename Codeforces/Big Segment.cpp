#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,i,mi=100000000001ll,ma=-1,k=0,pos;
long long int a[100002];
long long int b[100002];
scanf("%lld",&n);
for(i=0;i<n;i++)
{
    scanf("%lld %lld",&a[i],&b[i]);
    if(a[i]<mi)
        mi=a[i];
    if(b[i]>ma)
        ma=b[i];
}
//if there is any i for which a[i]<=mi and b[i]>=ma
//then print its position
//printf("%lld %lld\n",mi,ma);
for(i=0;i<n;i++)
{
    if(a[i]<=mi && b[i]>=ma)
       {
           k=1;
           pos=i;
       }
}
if(k==1)
    printf("%lld\n",pos+1);
else
    printf("-1\n");
}
