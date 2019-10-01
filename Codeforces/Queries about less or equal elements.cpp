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
    ll n,m;
    cin>>n>>m;
    ll i;
    vector<ll>v;
    vector<ll>v1;
    vector<ll>v2;
    vector<ll>v3;
    ll x,s=0;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	v.push_back(x);
    }
     sort(v.begin(),v.end());
    s=0;
    for(i=0;i<m;i++)
    {
    	cin>>x;
    	ll p;
    	p=upper_bound(v.begin(),v.end(),x)-v.begin();
    	cout<<p<<" ";
    }
   

//    cout<<fixed;
// cout<<setprecision(0);
}