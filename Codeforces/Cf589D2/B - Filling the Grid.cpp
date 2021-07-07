
1228 B - Filling the Grid.cpp GNU C++17 Accepted
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
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll h, w;
    cin >> h >> w;
    vector<ll>r(h+2);
    vector<ll>c(w+2);
    f(i, 0, h) 
        cin>>r[i];
    f(i, 0, w) 
        cin>>c[i];
    ll ans = 0;
    ll q[1001][1001]={0};
    f(i, 0, h) {
        f(j, 0, r[i]+1) {
            if(j==r[i])
            {
                if(q[i][j]==1)
                {
                    cout<<0;
                    return 0;
                }
            
                q[i][j]=2;
            }
            else
            {
                if(q[i][j]==2)
                {
                    cout<<0;
                    return 0;
                }
        
                q[i][j]=1;
           }
        }
    }

    f(i, 0, w) {
        f(j, 0, c[i]+1) {
            if(j==c[i])
            {
                if(q[j][i]==1)
                {
                    cout<<0;
                    return 0;
                }
            
            q[j][i]=2;
        }
        else
        {
            if(q[j][i]==2)
            {
                cout<<0;
                return 0;
            }
        
            q[j][i]=1;
        }
    }
}
  f(i, 0, h) {
        f(j, 0, w) {
           if(q[i][j]==0)
           {
                ans++;
           }
       }
   }
    cout<<modpow(2,ans);
       cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
1228 B - Filling the Grid.cpp GNU C++17 Wrong answer on pretest 3
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
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll h, w;
    cin >> h >> w;
    vector<ll>r(h);
    vector<ll>c(w);
    f(i, 0, h) 
        cin>>r[i];
    f(i, 0, w) 
        cin>>c[i];
    ll ans = 1;
    f(i, 0, h) {
        f(j, 0, r[i]) {
            if (c[j] == i) {
                cout << 0;
                return 0;
            }
        }
        if (c[r[i]] > i) {
            cout << 0;
            return 0;
        }
        ll cnt = 0;
        f(j, r[i] + 1, w) {
            if (c[j] + 1 < i + 1) ++cnt;
        }
        f(j, 0, cnt) {
            ans=ans*2%MOD;
        }
    }
    cout<<ans%MOD;
       cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}