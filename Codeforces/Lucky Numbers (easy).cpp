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
    ll n;
    cin>>n;
    ll i,j;
    string s;
    ll x;
        	ll ans,mi=100000000000000000ll;
    for(i=1;i<=5;i++)
    {
    	s="";
    	for(j=0;j<i;j++)
    	{
    		s=s+(char)(4+'0');
    		//cout<<"hey\n";stringstream geek(s); 
    	}
    	   for(j=0;j<i;j++)
    	{
    		s=s+(char)(7+'0');
    	}
    	do
    	{
    		//cout<<s<<"\n";
    		x=stoll(s);
    		//cout<<n<<" "<<x<<"\n";
    		//cout<<(n-x)<<"\n";
    		if(x-n<mi && (x-n)>=0)
    		{
    			//cout<<n<<" "<<x<<"\n";
    			mi=abs(n-x);
    			ans=x;
    		}
    	}while(next_permutation(s.begin(),s.end())!=false);

    	//cout<<s<<"\n";
    }
    cout<<ans<<"\n";
//    cout<<fixed;
// cout<<setprecision(0);
}