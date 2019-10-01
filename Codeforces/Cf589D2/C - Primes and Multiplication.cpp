
1228 C - Primes and Multiplication.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;

#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)

const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
ll modpow(ll x, ll y){
    ll ans=1;
    if(y==1){
        return x%MOD;
    }
    x=x % MOD;
    y=y % (MOD-1);
    while(y){
        if(y & 1){
            ans = (ans*x) %MOD;
        }
        x *= x;
        x = x % MOD;
        y >>= 1;
    }
    return ans;
}

ll modinv(ll x){
    return modpow(x,MOD-2);
}
 
int main()

{
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w",stdout);
      #endif
    
   
    ll x,n;
    cin>>x>>n;
    set<ll>sets;

    while (x%2 == 0) 
    { 
        sets.add(2);
        x = x/2; 
    } 
  
    
    for (ll i = 3; i <= sqrt(x); i = i+2) 
    { 
       
        while (x%i == 0) 
        { 
           sets.add(i);
            x = x/i; 
        } 
    } 
    if(x>2)
        sets.add(x);
    vector<ll>factor(all(sets));
    
    ll sol=1;
    for(ll i=0;i<factor.size();i++)
    {
       ll nn=n;
       while(nn>0)
       {
            nn/=factor[i];
            sol=sol%MOD*modpow(factor[i],nn)%MOD;
       }

    }
    cout<<sol%MOD;
}