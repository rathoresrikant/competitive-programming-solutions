#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define     ll          long long int
#define     ld          double
#define     REP(i,x,n)    for(ll i=x;i<n;i++)
#define     SZ(v)       (ll)v.size()
#define     endl        "\n"
#define     ff          first
#define     ss          second
#define     PQ_MIN      priority_queue <ll, vector<ll>, greater<ll> >
#define     PQ          priority_queue <int>
#define     pbds        tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define     setbit(x)   __builtin_popcount(x)
#define     prec(n)     fixed<<setprecision(n)
#define     pb(n)       push_back(n)
#define     mp(a,b)     make_pair(a,b)
#define     clr(n)      memset(n,0,sizeof(n))
#define     reset(n)    memset(n,-1,sizeof(n))
#define     ii          pair<ll,ll>
#define     vll         vector<ll>
#define     PI          3.1415926535897932384626433832795028841971693993751

using namespace std;
using namespace __gnu_pbds;
bool comp(pair<ll,ll> a,pair<ll,ll> b) {       }
const ll MOD=1e9+7;
void print(vector<vector<ll> >&v)
{
    ll n=v.size();
    ll m=v[0].size();
    cout<<"\n";
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cout<<v[i][j]<<" ";
        cout<<"\n";
    }
}
void print(vector<ll>&v)
{
    ll n=v.size();
    cout<<"\n";
    for(ll i=0;i<n;i++)
    {
            cout<<v[i]<<" ";
    }
        cout<<"\n";

}
void print(set<ll>&s)
{

cout<<endl;

set<ll>::iterator it;
for(it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
cout<<endl;
}
ll __lcm(ll a,ll b)
{
    return ((a*b)/__gcd(a,b));
}
ll power(ll a,ll p)
{
    ll res=1;
    while(p>0)
    {
        if(p&1){
            res=(res*a)%MOD;
            p--;
        }
            a=(a*a)%MOD;
            p/=2;
    }

    return res%MOD;
}
const ll INF=1e9;
const ll nxm=1e5+5;
int n,lll;
int a[nxm];
double diff(double x)
{
    double v=1,t1=0,prev=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            t1+=(a[i]-prev)/v;
            v+=1;
            prev=a[i];

        }
        else
        {
            break;
        }
    }
    t1+=(x-prev)/v;
    v=1,prev=lll;
    double t2=0;
     for(ll i=n-1;i>=0;i--)
    {
        if(a[i]>x)
        {
            t2+=(prev-a[i])/v;
            v+=1;
            prev=a[i];

        }
        else
        {
            break;
        }
    }
            t2+=(prev-x)/v;
    return t1-t2;
}
double time(double x)
{
    double v=1,t1=0,prev=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            t1+=(a[i]-prev)/v;
            v+=1;
            prev=a[i];

        }
        else
        {
            break;
        }
    }
            t1+=(x-prev)/v;
    return t1;
}
void solve(){
cin>>n>>lll;
REP(i,0,n) cin>>a[i];
cout<<prec(7);
double l=0,r=lll;
double mini=1e-7;
//cout<<(diff(5))<<endl;
//cout<<(diff(6))<<endl;
//cout<<(diff(7))<<endl;
//cout<<(diff(8))<<endl;
//cout<<(diff(9))<<endl;
double ans=-1,mini_pro=1e9;
while(l<=r)
{
    double mid=l+(r-l)/2;
    double f=diff(mid);
//cout<<l<<" "<<r<<" "<<mid<<" "<<f<<endl;
    if(abs(f)<mini_pro)
    {
        mini_pro=abs(f);
        ans=time(mid);
    }
//    if(abs(f)<=mini)
//    {
//        if()
//        cout<<time(mid)<<endl;return;
//    }
    if(f<0)
    {
        l=mid+mini;
    }
    else
    {
        r=mid-mini;
    }
}
cout<<ans<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t=1;
	cin>>t;
    REP(i,1,t+1)
    {
		solve();
    }
	return 0;
}

