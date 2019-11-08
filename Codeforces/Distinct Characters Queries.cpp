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
ll n;
ll BIT[100][100005];
void update(ll x, ll delta,ll ch)       //add "delta" at index "x"
{
    //cout<<"he"<<x<<" "<<n<<"\n";
    for(; x <= n; x += x&-x)
    {
            //cout<<"Coming\n";
          BIT[ch][x]+=delta;
          //cout<<"ch"<<ch<<" "<<x<<" "<<BIT[ch][x]<<"\n";
    }
}
ll query(ll x,ll ch)      //returns the sum of first x elements in given array a[]
{
     ll sum = 0;
     for(; x > 0; x -= x&-x)
         sum += BIT[ch][x];
     return sum;
}
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);   
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
    #endif  
    ll i,q;
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        //cout<<(s[i]-'a')<<"s\n";
        update(i+1,1,(s[i]-'a'));
         // cout<<BIT[0][2];
    }
    //cout<<BIT[0][5]<<"\n";
    //cout<<query(3,2)<<"\n";
   

    cin>>q;
    while(q--)
    {
        ll x,l,r,p,y;
        char ch;
        cin>>x;
        if(x==1)
        {
            cin>>p>>ch;
            ll el;
            for(i=0;i<26;i++)
            {
                if(query(p,i)-query(p-1,i)==1)
                {
                    //cout<<"hello\n";
                    el=i;
                    break;
                }
            }
            //cout<<"Element is"<<el<<"\n";
            update(p,-1,el);
            update(p,1,ch-'a');
            // cout<<"Query"<<query(4,2);
        }
        ll my=0;
        if(x==2)
        {
            //cout<<"Hi\n";
            cin>>l>>r;
            for(i=0;i<26;i++)
            {
                ll ans;
                ans=query(r,i)-query(l-1,i);
               // cout<<i<<" "<<ans<<"Ans"<<"\n";
                if(ans>=1)
                     my++;

            }
            cout<<my<<"\n";

        }
    }

//    cout<<fixed;
// cout<<setprecision(0);
}