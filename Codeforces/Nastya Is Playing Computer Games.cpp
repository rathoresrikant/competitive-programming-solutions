#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,z,ans,x,y;
    scanf("%d %d",&a,&b);
    x=b-1;
    y=a-b;
    z=min(x,y);
    ans=3*a+z;
    printf("%d\n",ans);
}
