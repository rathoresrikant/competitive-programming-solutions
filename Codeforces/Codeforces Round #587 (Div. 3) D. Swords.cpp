/******************************************
* AUTHOR : AAYUSH GARG*
* NICK : aayushgarg_03 *
* INSTITUTION : BIT MESRA *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
#define dd double
#define ld long double
#define for0(i, n) for(ll i = 0; i < n; i++)
#define for2(a,b,c) for(ll i=a;i<b;i+=c)
#define for1(i,n) for(ll i=1;i<=n;i++)
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define VP vector< pii >
#define clr(x) x.clear()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define ascii(c) (int)char (c)
#define all(v) (v).begin(),(v).end()
#define maxx 1000000


int main() 
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n;
cin>>n;
ll a[n];

for0(i,n)
 cin>>a[i];
 
sort(a,a+n);

ll gcd = a[n-1]-a[0];
for( ll i=1;i<n-1;i++)
{
	if(a[i]!=a[n-1])
	gcd=__gcd(gcd,a[n-1]-a[i]);
	 
}

ll x=0;
for0(i,n)
 x+=(a[n-1]-a[i])/gcd;

cout<<x<<" "<<gcd;

return 0;
}
