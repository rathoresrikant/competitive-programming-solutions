#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mod 1000000007
#define deb(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define deb3(x,y,z) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<"\t"<<#z<<" : "<<z<<endl;
#define inf 1000000000000000 

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

 
using namespace std;
 
 
long long modulo(long long base,long long exponent,long long modulus);
long long choose(ll n,ll k);
ll inverse(ll a,ll m);
void build();
void fileio();
ll ncr(ll n,ll r);
 
const int nax=1e6+10;
const int LG=log2(nax)+1;
vector<ll> fact(nax);

ll dp[1LL<<20]; 
 
int32_t main() {
 
    FIO
    //fileio();
    //build();

	string s;
	cin>>s;

	ll n=s.size();

	for(int i=0;i<n;i++)
	{
		vector<ll> freq(20,0);
		ll j=i;
		ll mask = 0;
		while(j>=0)
		{
			if(freq[s[j]-'a']>0)
				break;
			freq[s[j]-'a']++;
			mask|=(1LL<<(s[j]-'a'));

			dp[mask] = max(dp[mask],i-j+1);
			j--;
		}
	}

	for(int i=0;i<20;i++)
	{
		for(int mask=0;mask<(1LL<<20);mask++)
		{
			if((mask & (1LL<<i)))
				dp[mask] =max(dp[mask],dp[mask^(1LL<<i)]);
		}	
	}

	ll ans=0;
	for(int i=0;i<n;i++)
	{
		vector<ll> freq(20,0);
		ll j=i;
		ll mask = 0;
		while(j>=0)
		{
			if(freq[s[j]-'a']>0)
				break;
			freq[s[j]-'a']++;
			mask|=(1LL<<(s[j]-'a'));
			
			ans = max(ans, i-j+1 +  dp[(1LL<<20)-1-mask]);
			j--;
		}
	}

	cout<<ans<<endl;
	
    
 
    return 0;
}
 
ll ncr(ll n,ll r)
{
    if(r>n || r<0 || n<0)
        return 0;
    ll ans=fact[n];
    ll temp=(fact[n-r]*fact[r])%mod;
    ans=(ans*inverse(temp,mod))%mod;
    return ans;
}

void fileio()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
} 
void build()
{
    fact[0]=1;
    for(ll i=1;i<nax;i++)
        fact[i]=(fact[i-1]*i)%mod;   
}
 
long long modulo(long long base,long long exponent,long long modulus)
{
    if(modulus ==1)
        return 0;
 
    long long result=1;
    base=base % modulus;
    while(exponent>0)
    {
        if(exponent%2==1)
        {
            result=(result*base) % modulus;
 
        }
        exponent=exponent>>1;
        base = (base*base) % modulus;
    }
    return result;
}
 
long long choose(ll n,ll k)
{
    if(k==0)  return 1;
    return (n* choose(n-1,k-1))/k;
}
 
void EE(ll a,ll b,ll &co1,ll &co2)
{
    if(a%b==0)
    {
        co1=0;
        co2=1;
        return;
    }
    EE(b,a%b,co1,co2);
    ll temp=co1;
    co1=co2;
    co2=temp-co2*(a/b);
}
 
ll inverse(ll a,ll m)
{
    ll x,y;
    EE(a,m,x,y);
    if(x<0) x+=m;
    return x;
}
