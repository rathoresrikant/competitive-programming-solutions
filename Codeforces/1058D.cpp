#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll g=__gcd(n*m,k);
	ll numerator=(n*m)/g;
	ll denominator=k/g;
	if(denominator>2)
	{
		cout<<"NO\n";
		return(0);
	}
    
    
	ll ab=(2/denominator)*numerator;
	ll squareroot=sqrt(ab)+5;
//	cout<<squareroot<<endl;
    if(n<=m)
    {	ll lo=max(1LL,(ab/m)); //to save from divide by 0 error
    	ll hi=min(squareroot,n);
    	for(ll i=lo;i<=hi;i++)
    	{
    		if((ab%i)==0)
    		{
    			ll temp=ab/i;
    			//cout<<temp<<endl;
    			if(temp<=m)
    			{
    				cout<<"YES\n";
    				cout<<0<<" "<<0<<endl;
    				cout<<i<<" "<<0<<endl;
    				cout<<0<<" "<<(ab/i)<<endl;
    				return(0);
    			}
    		}
    	}
    }
    else
    {
        
        ll lo=max(1LL,(ab/n)); //to save from divide by 0 error
    	ll hi=min(squareroot,m);
    	for(ll i=lo;i<=hi;i++)
    	{
    		if((ab%i)==0)
    		{
    			ll temp=ab/i;
    			//cout<<temp<<endl;
    			if(temp<=n)
    			{
    				cout<<"YES\n";
    				cout<<0<<" "<<0<<endl;
    				cout<<(ab/i)<<" "<<0<<endl;
    				cout<<0<<" "<<i<<endl;
    				return(0);
    			}
    		}
    	}
        
    }
	cout<<"NO\n";


}
