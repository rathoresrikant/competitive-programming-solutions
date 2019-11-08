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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,x;
        long double s=0;
        cin>> n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            s+=x;
        }
        cout<<fixed;
        cout<<setprecision(0);
        cout<<(ll)ceil((long double)s/n)<<"\n";
    }
}