#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1011001110001111ll
ll p1=29;
ll mod1=mod;
ll power[1501];
vector<ll>hash1;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    power[0]=1;
    for(ll i=1;i<=1501;i++)
    {
        power[i]=((power[i-1]%mod)*p1)%mod;
    }
    //cout<<power[3]<<"\n";
    string s;
    ll i;
    unordered_set<ll>st;
    cin >> s;
    char a[30];
    //cout<<hash1[1]<<"\n";
    for (ll i = 0; i < 26; ++i)
    {
        cin >> a[i];
    }
    ll k;
    cin >> k;
    ll ha[s.length() + 10];
    ll no = 0;
    for (ll i = 0; i < s.length(); ++i)
    {
        if (a[(ll)(s[i] - 'a')] == '0')
        {
            no++;
        }
        ha[i] = no;
    }
    ll ans = 0;
    for (ll i = 0; i < s.length(); ++i)
    {
        ll x=0;
        for (ll j = i; j < s.length(); ++j)
        {
            if (i >= 1)
            {
                if (ha[j] - ha[i - 1] <= k)
                {
                   x=(x+power[j-i]*s[j])%mod1;
                   st.insert(x);
                }
            }
            else
            {
                if (ha[j] <= k)
                {
                   x=(x+power[j-i]*s[j])%mod1;
                   st.insert(x);
                }
            }
        }
    }
    cout << st.size();
    return 0;
}