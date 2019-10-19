/*
Problem link: https://www.codechef.com/SEPT19B/problems/GDSUB

Chef is given a sequence of prime numbers A1,A2,…,AN. This sequence has exactly 2N subsequences. A subsequence of A is good if it does not contain any two identical numbers; in particular, the empty sequence is good.

Chef has to find the number of good subsequences which contain at most K numbers. Since he does not know much about subsequences, help him find the answer. This number could be very large, so compute it modulo 1,000,000,007.

Input
The first line of the input contains two space-separated integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.

Output
Print a single line containing one integer ― the number of good subsequences with size at most K, modulo 1,000,000,007.

*/

#include <bits/stdc++.h>
#define MOD 1000000007
#define pb push_back
#define ll long long
using namespace std;

int main() {
    ll n,k;
    cin>>n>>k;
    map<ll,ll> mpa;
    ll num;
    for(ll i = 0;i < n;i++) {
        cin>>num;
        mpa[num]++;
    }
    vector<ll> v;
    ll sum = 0;
    for(auto it:mpa) {
        v.pb(it.second);
        sum = (sum%MOD+it.second%MOD)%MOD;
    }
    ll len = v.size();
    ll ans = (n+1)%MOD;
    ll arr[len];
    for(ll i = 0;i < len;i++) {
        arr[i] = v[i];
    }
    ll curr = 0,temp = 0;
    for(ll j = 2;j <= min(len,k);j++) {
        temp = 0;
        for(ll i = 0;i < len;i++) {
            sum = (sum%MOD-arr[i]%MOD+MOD)%MOD;
            curr = (v[i]%MOD*sum%MOD)%MOD;
            arr[i] = curr%MOD;
            temp = (temp%MOD+curr%MOD)%MOD;
            ans = (ans%MOD+curr%MOD)%MOD;
        }
        sum = temp%MOD;
    }
    cout<<ans%MOD;
}
