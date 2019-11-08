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
    ll n,i,x,ans=-1;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	v.push_back(x-i);
    	if(i>=x)
    	{
    		ans=i+1;
    		break;
    	}
    }
    vector<ll>v1;
    ll mi=mod;
    if(ans==-1)
    {
    	for(i=0;i<n;i++)
    	{
    		v1.push_back((ll)ceil((long double)v[i]/n));
    	}
    	for(i=0;i<n;i++)
    	{
    		if(v1[i]<mi)
    		{
    			mi=v1[i];
    			ans=i+1;

    		}
    	}
    }
    cout<<ans<<"\n";

//    cout<<fixed;
// cout<<setprecision(0);
}