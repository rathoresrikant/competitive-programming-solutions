#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 10000000007
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
    ll q;
    cin>>q;
    while(q--)
    {
    	ll c,m,x,ans,c1,m1,x1,a;
    	cin>>c>>m>>x;
    	a=min(c,m);
    	c1=c-a;
    	m1=m-a;
    	ans=(a*2+c1+m1+x)/3;
    	cout<<min(a,(ll)ans)<<"\n";
    	//ans=min(a,c1+m1+x);
    	//cout<<ans<<"\n";



    }
}