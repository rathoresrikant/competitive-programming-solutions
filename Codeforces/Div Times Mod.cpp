#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,i,ans,x;
scanf("%d %d",&a,&b);
for(i=b-1;i>=1;i--)
{
    if((((double)a/i)-floor(a/i))==0)
    {
        x=a/i;
        ans=x*b+i;
        break;
    }
}
    printf("%d",ans);
}
