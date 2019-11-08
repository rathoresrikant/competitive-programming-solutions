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
    ll q;
    cin>>q;
    while(q--)
    {
      ll n,i;
      cin>>n;
      string s1,s2;
      cin>>s1>>s2;
      ll flag=1,a=1;
      for(i=0;i<n;i++)
      {
        if(a==1)
        {
          if(s1[i]=='1' || s1[i]=='2')
          {
            continue;
          }
          if(s2[i]=='1' || s2[i]=='2')
          {
            flag=0;
            break;
          }
          a=2;
        }
        else if(a==2)
        {
          if(s2[i]=='1' || s2[i]=='2')
            continue;
          if(s1[i]=='1' || s1[i]=='2')
          {
            flag=0;
            break;
          }
          a=1;
        }
      }
      if(flag==1 && a==2)
        cout<<"YES\n";
      else
        cout<<"NO\n";

    }
}