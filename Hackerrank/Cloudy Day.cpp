#include<bits/stdc++.h>
using namespace std;

#define forn(i,n) for(i=0;i<n;i++)
#define forin(i,s,n) for(i=s;i<n;i++)
#define revo(i,s) for(i=s;i>=0;i--)
#define rev(i,s,e) for(i=s;i>=e;i--)
#define pb push_back
#define ll long long
#define endl "\n"
#define PI 3.14159265

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //Input Method Defined
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int towns;
    cin>>towns;
    pair<ll,ll> houses[towns+2];
    int i;
    forn(i,towns)cin>>houses[i].second;
    forn(i,towns)cin>>houses[i].first;

    houses[towns].first = LLONG_MAX;
    houses[towns].second = 0;
    houses[towns+1].second = 0;
    houses[towns+1].first = LLONG_MIN;

    sort(houses,houses + towns +2, [](pair<ll,ll> a,pair<ll,ll> b){return b.first>a.first;});
   
    int clouds;
    cin>>clouds;
    pair<ll,ll> rain[clouds];
    forn(i,clouds)cin>>rain[i].first;
    forn(i,clouds)
    {
        int t;
        cin>>t;
        rain[i].second = rain[i].first + t;
        rain[i].first-=t;
    }

    pair<ll,ll> range[clouds]; 
    ll cloudsabove[towns+2] = {};

    forn(i,clouds)
    {
        // cout<<rain[i].first<<"    "<<rain[i].second<<endl;
        range[i].first = lower_bound(houses,houses+towns+2,rain[i].first,[](pair<ll,ll> a,ll b){return b>a.first;}) - houses;
        range[i].second = upper_bound(houses,houses+towns+2,rain[i].second,[](ll b, pair<ll,ll> a){return b<a.first;}) - houses;
        cloudsabove[range[i].first]+=1;
        cloudsabove[range[i].second]-=1;
    }

    ll ans = 0;
    forin(i,1,towns+2)
    {
        cloudsabove[i] += cloudsabove[i-1];
        if(cloudsabove[i] == 0)ans+=houses[i].second;
        if(cloudsabove[i]!=1)houses[i].second = 0;
    }
    forin(i,1,towns+2)houses[i].second+=houses[i-1].second;
    ll maxi = INT_MIN;

    forn(i,clouds)
    {
        maxi = max(maxi,houses[range[i].second-1].second - houses[range[i].first-1].second);
    }

    if(maxi != INT_MIN)ans+=maxi;

    cout<<ans;


}
