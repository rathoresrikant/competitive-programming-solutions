#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,i,ans,ma=0;
ll arr[10005];
ll co[10005]={0};
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
    co[arr[i]]++;
    if(arr[i]>ma)
        ma=arr[i];
}
//cout<<"Ma is"<<ma<<"\n";
for(i=1;i*i<=ma;i++)
{
    if(ma%i==0)
    {
        if(i!=ma/i)
        {
            co[i]--;
            co[ma/i]--;
        }
        else
            co[i]--;
    }
}
for(i=10000;i>=0;i--)
{
    if(co[i]>0)
    {
        ans=i;
        break;
    }
}
cout<<ma<<" "<<ans<<"\n";
}

