
1230 D - Marcin and Training Camp.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define edl "\n"
#define str string
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, N = 1e5 + 10;
const ll LINF = LLONG_MAX;
ll a[8000],b[8000],n;

int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    cin >> n;
    f(i,0,n){
      cin >> a[i];
    }
    f(i,0,n){
      cin >> b[i];
    }
    ll ans=0;
    vector<bool>valid(n);
    f(i,0,n){
      f(j,i+1,n){
        if(a[i]==a[j]){
          valid[i]=valid[j]=true;
        }    
      }
    }

    f(i,0,n){
      bool ok=false;
      f(j,0,n){
        if(i!=j&&valid[j]&&((a[i]&a[j]))==a[i]){
          ok=true;
        }
      }
      if(ok)
        ans+=b[i];
    }
   
    cout << ans;


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 