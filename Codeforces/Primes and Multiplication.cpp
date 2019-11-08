#include "bits/stdc++.h"
using namespace std;
using ll = long long int;
const ll mod = 1000000007;
/**

      ___           ___                       ___           ___     
     /\  \         /\  \                     /\  \         /\  \    
    /::\  \       /::\  \         ___       /::\  \        \:\  \   
   /:/\:\  \     /:/\:\__\       /|  |     /:/\:\  \        \:\  \  
  /:/ /::\  \   /:/ /:/  /      |:|  |    /:/ /::\  \   _____\:\  \ 
 /:/_/:/\:\__\ /:/_/:/__/___    |:|  |   /:/_/:/\:\__\ /::::::::\__\
 \:\/:/  \/__/ \:\/:::::/  /  __|:|__|   \:\/:/  \/__/ \:\~~\~~\/__/
  \::/__/       \::/~~/~~~~  /::::\  \    \::/__/       \:\  \      
   \:\  \        \:\~~\      ~~~~\:\  \    \:\  \        \:\  \     
    \:\__\        \:\__\          \:\__\    \:\__\        \:\__\    
     \/__/         \/__/           \/__/     \/__/         \/__/    

**/
////////////////////////////////////////////////////
vector<ll>v;
map<ll,ll>ma;
ll primef(ll n)
{
	ll i;
	if(n%2==0)
	{
		v.push_back(2);
	}
	while(n%2==0)
	{
		ma[2]++;
		n=n/2;
	}
	for(i=3;i*i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
			while(n%i==0)
			{
				ma[i]++;
				n=n/i;
			}
		}
	}
	if(n>2)
	{
		ma[n]++;
		v.push_back(n);
	}
}
ll power(ll x,ll y)
{
	ll po=1;
	while(y!=0)
	{
		if(y%2==0)
		{
			x=(x*x);
			y=y/2;
		}
		po=po*x;
		po=po;
		y--;
	}
	return po;
}
ll power1(ll x,ll y)
{
	ll po=1;
	while(y!=0)
	{
		if(y%2==0)
		{
			x=((x%mod)*(x%mod))%mod;
			y=y/2;
		}
		po=(po%mod)*(x%mod);
		po=po%mod;
		y--;
	}
	return po%mod;
}

ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll x,n,i;
    vector<ll>v1;
    cin>>x>>n;
    primef(x);
    ll ans=0,pro=1;
    for(i=0;i<v.size();i++)
    {
    	ll j=1;
    	ans=0;
    	ll t=n;
    	while(t>0)
    	{
    		ans=ans+t/v[i];
    		 t=t/v[i];

    		//  ans=ans+(n/power(v[i],j));
    		// // // //ans=ans%mod;
    		//   if(((long double)n/power(v[i],j))<1)
    		// 	break;
    		//  j++;
    		 //cout<<ans<<"\n";
    	}
    	//cout<<ans<<" h"<<v[i]<<"\n";
    	//cout<<power1(v[i],ans)<<"\n";
    	pro = (pro%mod*(power1(v[i],ans))%mod)%mod;
    	//pro=pro%mod;
    }
    cout<<pro<<"\n";
    	
}