#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n,i,ans=0,x;
ll arr[150005];
ll coun[150005]={0};
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
for(i=0;i<n;i++)
{
    x=arr[i];
if(coun[x-1]==0 &&(x-1)!=0)
{
    coun[x-1]=1;
    ans++;
}
else if(coun[x]==0)
{
    coun[x]=1;
    ans++;
}
else if(coun[x+1]==0)
{
    coun[x+1]=1;
    ans++;
}
//cout<<x<<" "<<ans<<"\n";
}
cout<<ans<<"\n";

//cout<<ans<<"\n";
}
