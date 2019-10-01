#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,am,mi=1000000000000000000,i,j,l,z;
    cin>>am>>x>>y;
    x=x*1;
    y=y*5;
for(i=0;(i*y)<=am;i++)
{
 mi=min(mi,(am-y*i)%x);
}
    cout<<mi;
}
