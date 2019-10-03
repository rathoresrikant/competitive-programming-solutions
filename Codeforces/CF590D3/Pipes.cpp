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


ll solve()
{
    ll n;
    cin>>n;

    char a[2][n+1];
    FOR(i,0,2)
    FOR(j,1,n+1)
    cin>>a[i][j];

    bool dp[2][n+1];
    FOR(i,0,2)
    FOR(j,0,n+2)
    dp[i][j]=false;

    dp[0][0]=true;
    FOR(j,1,n+1)
    {
        bool flag1 = (a[0][j]<='2');
        bool flag2 = (a[1][j]<='2');

        if(flag1 && flag2)
        {
            dp[0][j]=dp[0][j-1];
            dp[1][j]=dp[1][j-1];
        }
        else if(flag1)
        {
            dp[0][j]=dp[0][j-1];
        }
        else if(flag2)
        {
            dp[1][j]=dp[1][j-1];
        }
        else
        {
            dp[0][j]=dp[1][j-1];
            dp[1][j]=dp[0][j-1];
        }
    }

    if(dp[1][n]==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}


int main()
{
    FAST;
    
    ll t=1;
    cin>>t;
    
    while(t--!=0)
    {
        ll stat = solve();
    }
    return 0;
}
