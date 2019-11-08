// Brijesh Panara (201601074)
// DAIICT (India)
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define FILL(a,b) memset((a),(b),sizeof((a)))
#define precision(x,d) cout<<fixed<<setprecision(d)<<x
#define minQueue priority_queue<ll,vector<ll>,greater<ll> > 
#define maxQueue priority_queue<ll,vector<ll>,less<ll> > 

#define deb1(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"   "<<#y<<" : "<<y<<"  "<<#z<<" : "<<z<<endl;

#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define READ freopen("input.txt","r",stdin);
#define WRITE freopen("output.txt","w",stdout);
#define RANDOM srand(time(NULL));

#define MOD 1000000007
#define NAX 1000005
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN


//---------------------------------------------------------------------------//

//lazy propogation - update on sum and query on sum
typedef ll sdata;

sdata sa[NAX];
sdata lazy[4*NAX];
sdata stree[4*NAX];

void build(ll node,ll start,ll end)
{
    lazy[node]=0;
    if(start==end)
    {
        stree[node]=sa[start];
    }
    else
    {
        ll mid=(start+end)/2;
        build(2*node+1,start,mid);
        build(2*node+2,mid+1,end);
        stree[node] = (stree[2*node+1]+stree[2*node+2]);
    }
}

sdata query(ll node,ll start,ll end,ll l,ll r)
{
    if(lazy[node]!=0)
    {
        stree[node]+=lazy[node]*(end-start+1);
        if(start!=end)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node]=0;
    }

    if(l>end || start>r)
        return 0;
    if(l<=start && end<=r)
        return stree[node];

    ll mid = (start+end)/2;
    sdata p1 = query(2*node+1,start,mid,l,r);
    sdata p2 = query(2*node+2,mid+1,end,l,r);
    return (p1+p2);
}

void update(ll node,ll start,ll end,ll l,ll r,ll val)
{
    if(lazy[node]!=0)
    {
        stree[node]+=lazy[node]*(end-start+1);
        if(start!=end)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        else if(start==end)
            sa[start]=stree[node];
        lazy[node]=0;
    }

    if(l>end || start>r)
        return;

    if(l<=start && end<=r)
    {
        stree[node]+=val;
        if(start!=end)
        {
            lazy[2*node+1]+=val;
            lazy[2*node+2]+=val;
        }
        return;
    }
    ll mid=(start+end)/2;
    update(2*node+1,start,mid,l,r,val);
    update(2*node+2,mid+1,end,l,r,val);
    stree[node]=(stree[2*node+1]+stree[2*node+2]);
}

//---------------------------------------------------------------------------//



ll solve()
{
    ll n,m;
    cin>>n>>m;

    ll x[m];
    FOR(i,0,m)
    cin>>x[i];

    ll ans = 0;
    FOR(i,1,m)
    {
        ll a = x[i-1];
        ll b = x[i];

        if(a==b)
            continue;

        if(a>b)
            swap(a,b);
    
        update(0,0,NAX-1,1,a-1,abs(a-b));
        update(0,0,NAX-1,b+1,n,abs(a-b));
        update(0,0,NAX-1,a+1,b-1,abs(b-a-1));
        update(0,0,NAX-1,a,a,abs(b-1));
        update(0,0,NAX-1,b,b,abs(a));
    }
    
    FOR(i,0,n)
    cout<<query(0,0,NAX-1,i+1,i+1)<<" ";

    return 0;
}


int main()
{
    FAST;
    
    ll t=1;
    // cin>>t;
    
    while(t--!=0)
    {
        ll stat = solve();
    }
    return 0;
}
 
