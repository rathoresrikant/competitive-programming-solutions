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
    ll n,k,i,x,c=0;
    vector<ll>v;
    ll arr[200005]={0};
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
      cin>>x;
      v.push_back(x);
    }
    map<ll,ll>mp;
    list<ll>l;
    for(i=0;i<n;i++)
    {
      //cout<<"List s"<<l.size()<<"\n";
     if(mp.find(v[i])==mp.end() && c<k)
     {
      mp[v[i]]=1;
      l.push_back(v[i]);
      c++;
     }
     else if(mp.find(v[i])==mp.end() && c==k)
     {
      mp.erase(l.front());
      l.pop_front();
      mp[v[i]]=1;
      l.push_back(v[i]);
     }
    }
    vector<ll>a;
    for(auto i=l.begin();i!=l.end();i++)
    {
      a.push_back(*i);
    }
    cout<<a.size()<<"\n";
    for(i=a.size()-1;i>=0;i--)
      cout<<a[i]<<" ";

//    cout<<fixed;
// cout<<setprecision(0);
}