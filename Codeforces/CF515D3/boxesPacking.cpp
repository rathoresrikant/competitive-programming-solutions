#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll a[200005];
ll n,m,k;

int check(ll x)
{
    ll cnt=1,sum=a[x];
    for(int i=x+1;i<=n;i++)
    {
        if(sum+a[i]>k)
        {
            cnt++;
            sum=a[i];
        }
        else
        {
            sum+=a[i];
        }
    }
    if(cnt<=m)
    return 1;
    else
    return 0;
}
int main()
{
    ios
    cin>>n>>m>>k;

    for(int i=1;i<=n;i++)
    cin>>a[i];

    ll hi=200000,lo=1,mid,ans;

    while(hi>=lo)
    {
        mid=(hi+lo)/2;

        if(check(mid))
        {
            hi=mid-1;
            ans=mid;
        }
        else
        {
            lo=mid+1;
        }
    }

    cout<<n-ans+1;
}
