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
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll n,t,i,ma=0;
    vector<ll>v;
    vector<ll>v1;
    ll s=0,x;
    cin>>n>>t;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	v.push_back(x);
    }
    for(i=0;i<n;i++)
    {
    	s+=v[i];
    	v1.push_back(s);
    }
    for(i=0;i<n;i++)
    {
	ll x;
	x=t-v[i];
	//cout<<x<<"\n";
	ll p=upper_bound(v1.begin(),v1.end(),x+v1[i])-v1.begin();

	//cout<<p-i<<" ";
	if((p-i)>ma)
		ma=p-i;

    }
    cout<<ma<<"\n";
}