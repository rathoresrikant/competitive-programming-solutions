#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k,a,b,mid,i;
cin>>n>>k;
ll arr[1001]={0};
for(i=0;i<k;i++)
{
cin>>a>>b;
arr[a]=1;
arr[b]=1;
}
for(i=1;i<=n;i++)
{
    if(arr[i]==0)
    {
        mid=i;
    }
}
cout<<(n-1)<<"\n";
for(i=1;i<=n;i++)
{
    if(i!=mid)
        cout<<i<<" "<<mid<<"\n";
}
}