
1230 A - Dawid and Bags of Candies.cpp GNU C++17 Accepted
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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll s=a+b+c+d;
  
    ll s1=a+b;
    ll s2=a+c;
    ll s3=a+d;
    ll s4=b+c;
    ll s5=b+d;
    ll s6=c+d;
    ll s7=a+b+c;
    ll s8=b+c+d;
    ll s9=a+c+d;
    ll s10=a+b+d;
    if(s1==s6||s2==s5||s3==s4||s7==d||s8==a||s9==b||s10==c)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 
1230 A - Dawid and Bags of Candies.cpp GNU C++17 Wrong answer on pretest 3
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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll s=a+b+c+d;
    if(s&1)
    {
        cout<<"NO";
        return 0;
    }
    ll s1=a+b;
    ll s2=a+c;
    ll s3=a+d;
    ll s4=b+c;
    ll s5=b+d;
    ll s6=c+d;
    if(s1==s6||s2==s5||s3==s4)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 