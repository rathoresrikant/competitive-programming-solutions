/*
  Problem link: https://codeforces.com/problemset/problem/230/B
  
  Explanation: The following problem asks to check if the given numbers have specifically 3 distinct positive divisors.
  It can be confirmed that this is only possible in the case if and only if the given number is a square of a prime number.
  We use sieve to find the primes and later check the given case.
  
  Author: __PRAKHAR__ (codeforces id)

*/

#include<bits/stdc++.h>

#define ll long long int
#define ff(i,a,b) for(ll i = a; i < b; i++)
#define bf(i,b,a) for(ll i = b-1; i >= a; i--)
#define itf(i,a) for(auto i = a.begin(); i != a.end(); i++)
#define itfr(i,a) for(auto i = a.rbegin(); i != a.rend(); i++)
#define MII map<ll,ll> 
#define MCI map<char,ll>
#define MSI map<string,ll>
#define VI vector<ll> 
#define VC vector<char> 
#define VS vector<string> 
#define tc ll t = 1; cin>>t; while(t--)
#define PB push_back
#define MP make_pair
#define all(x) x.begin(),x.end()
#define DISPV(v) itf(i,v) cout << *i << ' ';
#define DISPM(m) itf(i,m) cout << i->first << ' ' << i->second << endl;

const int MOD = int(1e9) + 7;

using namespace std;
const int M = 10e6+1;
bool prime[M];

void sieve(){
    memset(prime,true,sizeof(prime));
    prime[1] = false;
    for(int i = 2; i*i < M; i++){
        if(prime[i]){
            for(int p = i*i; p <= M; p += i)
                prime[p] = false;
        }
    }    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sieve();
    tc{
        ll n;
        cin >> n;
        if(ceil(sqrt(n)) == floor(sqrt(n)) && prime[(int)(sqrt(n))] == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
