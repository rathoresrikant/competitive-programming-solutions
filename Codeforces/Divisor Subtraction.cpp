#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,i,k,n,c=0;
scanf("%lld",&n);
while(1)
{
    k=0;
    if(n==0)
        break;
    else
    {
        if(n%2==1)
        {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
                {
                    c++;
                    n=n-i;
                    k=1;
                    break;
                }

        }
        if(k==0)
        {
            c++;
            n=0;
        }
        }
        else
        {
            c=c+(n/2);
            break;
        }
    }
}
printf("%lld",c);
}
