#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
struct node
{
    ll f;
    ll s;
    ll t;
};
bool sor(node a,node b)
{
    return (a.f < b.f);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,i,c=0,x;
vector<struct node>arr;
ll a[100005];
ll b[100005];
ll ans1[100005]={0};
ll ans2[100005]={0};
cin>>n;
for(i=0;i<n;i++)
    cin>>a[i]>>b[i];
for(i=0;i<n;i++)
{
arr.push_back({a[i],i,1});
}
for(i=0;i<n;i++)
{
arr.push_back({b[i],i,2});
}
sort(arr.begin(),arr.end(),sor);
for(i=0;i<n;i++)
{
    x=arr[i].s;
    if(arr[i].t==1)
    ans1[x]=1;
    if(arr[i].t==2)
        ans2[x]=1;
}
for(i=0;i<n/2;i++)
{
    cout<<1;
}
for(i=n/2;i<n;i++)
{
    if(ans1[i]==1)
        cout<<1;
    else
        cout<<0;
}
cout<<"\n";
for(i=0;i<n/2;i++)
{
    cout<<1;
}
for(i=n/2;i<n;i++)
{
    if(ans2[i]==1)
        cout<<1;
    else
        cout<<0;
}
}