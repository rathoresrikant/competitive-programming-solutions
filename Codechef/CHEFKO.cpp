// SnackDown Round-1B
// Problem Link: https://www.codechef.com/SNCK1B19/problems/CHEFKO

#include<bits/stdc++.h>
#define ll long long
#define PII pair<ll,ll>
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define N 1000005
#define INF 1000000000000000

using namespace std;

ll n,m,x,y,z1,z2,t,z,k;

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        vector<pair<ll,ll>>arr;
        for(ll i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.pb(mp(x,y));
        }
        sort(arr.begin(),arr.end());
        priority_queue <ll, vector<ll>, greater<ll> > pq;

        for(ll i=0;i<k;i++)
        {
            pq.push(arr[i].s);
        }

        ll ans = 0;
        for(ll i=(k-1);i<n;i++)
        {
            ll tmp = pq.top();
            tmp = min(tmp,arr[i].s);
            ans = max(ans,tmp - arr[i].f);
            if(i != (n-1))
            {
                pq.push(arr[i+1].s);
                pq.pop();
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
