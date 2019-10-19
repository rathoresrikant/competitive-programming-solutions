#include <bits/stdc++.h>

using namespace std;
#define mod        1000000007
#define ft         first
#define sd         second
#define pb         push_back
#define all(x)     x.begin(),x.end()
#define ll         long long int
#define bl         bool
#define db         long double
#define vbi        vector<bool> 
#define vlli       vector<ll>
#define mp         make_pair
#define ms(x,v)    memset(x, v, sizeof x)
#define cnl        printf("\n");
#define fr(i,a,b)    for(ll i=a; i<=b; i++)
#define frr(i,b)   for(ll i=0;i<b;i++)
#define fb(i,b)    for(ll i=b-1; i>=0; i--)
#define PI         3.14159265

ll i,j,k;
long long int max(ll a,ll b)
{
    if(a>b) return a;
    return b;
}
long long int min(ll a,ll b)
{
	if(a<b) return a;
	return b;
}
void solve()
{
    long long int  n;
    cin>>n;long long int i;
    vector<long long int> rp(n+2),zh(n+2),rl(n+2,0),d(n+2,0),l(n+2),r(n+2),a(n+2);
        for( i=1;i<=n;i++)
        {
            cin>>rp[i];
            l[i]=max(1,i-rp[i]);
            r[i]=min(n,i+rp[i]);
        }
        for( i=1;i<=n;i++)
        {
            d[l[i]]++;
            d[r[i]+1]--;
        }
       for( i=1;i<=n;i++)
        {
            a[i]=a[i-1]+d[i];  
        }
       for( i=1;i<=n;i++)
        {
            cin>>zh[i];
        }
        sort(zh.begin(),zh.end());
        sort(a.begin(),a.end());
        if(zh==a)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    long long int  tc;
    cin>>tc;
    while(tc--)
    {
       solve();
    }
    return 0;
}
