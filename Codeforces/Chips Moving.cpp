#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,c1=0,c2=0,x;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>x;
    if(x%2==0)
        c1++;
    else
        c2++;
}
cout<<min(c1,c2);
}
