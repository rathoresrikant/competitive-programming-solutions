#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,k,c=0;
    long long int a[100000];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+t);
    for(i=0;i<t;i++)
    {
        if(a[i]==(i+1))

            c++;
    }
    printf("%lld\n",c);
}
