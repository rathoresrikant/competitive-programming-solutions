#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,x,i,mi=10000000000ll,c=0,co=0;
ll arr[100002];
ll ne[100002];
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
        co++;
        if(arr[i]<0)
            ne[i]=arr[i];
        else
            ne[i]=-1*arr[i]-1;

}
for(i=0;i<n;i++)
{
    if(mi>ne[i])
        mi=ne[i];
}
if(co%2==0)
{
    for(i=0;i<n;i++)
        cout<<ne[i]<<" ";
}
else
{
    for(i=0;i<n;i++)
    {
        if(ne[i]==mi && c==0)
        {
            cout<<(-1*mi-1)<<" ";
            c++;
        }
        else
            cout<<ne[i]<<" ";
    }
}
}