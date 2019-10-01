#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k,ma=0,mi=1000000000ll,i,j,c=0;
ll arr[20005];
cin>>n>>k;
for(i=0;i<n;i++)
{
    cin>>arr[i];
    ma=max(ma,arr[i]);
    mi=min(mi,arr[i]);
}
if(ma-mi>k)
{
 
    cout<<"NO\n";
    return 0;
}
cout<<"YES\n";
for(i=0;i<n;i++)
{
    c=0;
    for(j=0;j<arr[i];j++)
    {
       c++;
        if(c%k!=0)
            cout<<(c%k)<<" ";
        else
            cout<<k<<" ";
    }
    cout<<"\n";
}
}