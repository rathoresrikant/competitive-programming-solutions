#include <bits/stdc++.h>
#include <time.h>
#include <assert.h>


using namespace std;


#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// s.order_of_key(x);           // gives order of x in the set


#define For(i,x,n)  for(long long i=x;i<n;i++)
#define rFor(i,x,n) for(long long i=x;i>=n;i--)
#define itFor(it,st)   for(auto it=st.begin() ; it!=st.end() ; it++)
#define MOD 1000000007
#define PI 3.141592653589793
#define INF 999999999999999999
#define N 1000005
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sp " "
#define cont continue
#define brk break

#define deb1(x)                cout<<#x<<": "<<x<<endl
#define deb2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define deb3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define deb4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

using namespace std;



void setprime(ll n=15000002);
ll choose(ll n,ll k);
void showArray(ll a[], ll n);
ll gcd(ll a, ll b);
ld len(ld x1, ld y1, ld x2, ld y2);
ld gcd_ld(ld x, ld y);
ll power(ll x, ll n);
ll power1(ll x,ll n);

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cout<<fixed;
    cout<<setprecision(3);
    srand(time(NULL));

    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        ll a[n],sum=0;
        For(i,0,n){
            cin>>a[i];
            sum += a[i];
        }
        ll ans = sum/n;
        if(sum%n != 0)
            ans++;
        cout<<ans<<"\n";
    }
    
    //cout<<"\nTime used = "<<static_cast<double>(clock())/(CLOCKS_PER_SEC)<<"s"<<endl;  // - for checking time used for a test case
    return 0;
}

//s1.substr(1,3) - return 3 characters starting from position 1 as substring of string sz1. eg sz1="shreynumh" sz1.substr(2,5)="reyan"
//num = atoi(s.c_str()); //convert string s to integer num
//n.erase(i,std::string::npos); //erase i th position in string n , decreasing string size
//s.find(b)!= std::string::npos - finds string b in string a - true if found
//cout<<"Time used = "<<static_cast<double>(clock())/(CLOCKS_PER_SEC)<<"s"<<endl;  // - for checking time used for a test case


void setprime(ll isprime[],ll n,ll cc=0)
{
    isprime[1]=1;
    map<ll,ll> hm;
    ll i;
    for(i=2 ; i*i<=15000002 ; i++)
        if(isprime[i]==0){
            for(ll j=2*i ; j<=15000001 ; j+= i)
                if(isprime[j]==0)
                    isprime[j]=i;
            isprime[i]=i;
            hm[i] = cc;
            cc++;
        }
    for( ; i<15000002 ; i++)
        if(isprime[i]==0)
            isprime[i]=i,hm[i]=cc,cc++;
}

ll choose(ll n,ll k)
{
    if(k==0)  return 1;
    return (n* choose(n-1,k-1))/k;
}

void showArray(ll a[], ll n){
    For(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

ld len(ld x1, ld y1, ld x2, ld y2){
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

ld gcd_ld(ld x, ld y) {
    ld eps=0.0001;
    while (fabs(x) > eps && fabs(y) > eps) {
        if (x > y)
                x -= floor(x / y) * y;
        else
                y -= floor(y / x) * x;
    }
    return x + y;
}

ll power(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return (power((x*x)%MOD,n/2))%MOD;
    else                             //n is bal
        return (x*power((x*x)%MOD,(n-1)/2))%MOD;
}

ll power1(ll x,ll n)
{
    ll num = 1;
    For(i,0,n){
        num = (num*x)%MOD;
    }
    return num;
}                
