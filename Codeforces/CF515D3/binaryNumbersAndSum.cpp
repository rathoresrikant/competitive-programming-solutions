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
ll mod=998244353;
ll power(ll a,ll b, ll mod)
{
    if(b==0)
    return 1;
    
    if(b%2==0)
    {
        ll x=power(a,b/2,mod);
        return (x*x)%mod;
    }
    else
    {
        ll x=power(a,b/2,mod);
        return (((x*x)%mod)*a)%mod;
    }
}
int main()
{
    ios
    ll n,m;
    cin>>n>>m;
    string s,t;
    ll a[200005]={0};
    cin>>s;
    cin>>t;

    ll st,st1;

    if(t.size()<s.size())
    {
        st=s.size()-t.size();
        st1=st;
    }
    else 
    {
        st=0;
        st1=s.size()-t.size();
    }
    
    int cnt=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='1')
        cnt++;

        a[i]=cnt;   
    }

    ll ans=0;
    for(int i=st;i<s.size();i++)
    {
        if(s[i]=='1'&&a[i-st1]>0)
        {
            ans+=((a[i-st1]*power(2,n-1-i,mod)))%mod;
            ans=ans%mod;
        }
        //cout<<ans<<endl;
    }
    cout<<ans;
}
