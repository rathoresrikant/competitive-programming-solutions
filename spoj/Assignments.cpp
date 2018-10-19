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
ll n;
ll a[100][100];
ll dp[10000000];
ll int f(ll mask)
{
    if(mask==(1<<n)-1)
    return 1;
    
    if(dp[mask]!=-1)
    return dp[mask];
    
    ll y=__builtin_popcount(mask);
    ll ans=0;
    for(ll int i=0;i<n;i++)
    {
        //cout<<a[i][y]<<endl;
        if(((mask>>i)&1)==0&&a[i][y]==1)
        {
            //cout<<mask<<" "<<i<<endl;
            ans=ans+f(mask|(1<<i));
        }
    }
    //cout<<mask<<" "<<ans<<endl;
    dp[mask]=ans;
    return ans;
}
int main()
{
    ios
    int t;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
        memset(dp,-1,sizeof dp);
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
 
        cout<<f(0)<<endl;
    }
} 
