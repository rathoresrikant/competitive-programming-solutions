
1230 B - Ania and Minimizing.cpp GNU C++17 Accepted
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
int main() {
    fast();
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    ll n,k;
    cin >> n >> k;
    str s;
    cin >> s;
    if(s.size()==1&&k!=0)
    {
        cout<<0;
        return 0;
    }
    
    if(k==0)
    {
        cout<<s;
        return 0;
    }

    f(i,0,n)
    {
        if(s[i]!='1'&&i==0&&k>0)
        {
            s[i]='1';
            k--;
            continue;
        }
        if(s[i]!='0'&&s[i]!='1'&&i!=0&&k>0)
        {
            s[i]='0';
            k--;
            continue;
        }
        if(s[i]!='0'&&s[i]=='1'&&i!=0&&k>0)
        {
            s[i]='0';
            k--;
            continue;
        }


    } 
    cout<<s;  

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 