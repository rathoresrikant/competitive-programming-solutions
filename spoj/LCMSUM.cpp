#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool pr[1000010]={0};
vector<ll> prime;
void sieve()
{   
    ll i,j;
    for(i=1;i<=1000005;i++)
    {
        if(pr[i]==0)
        {
            for(j=i*i;j<=1000005;j+=i)
                pr[i]=1;
        }
    }
    for(i=1;i<=1000005;i++)
        if(pr[i]==0)
        prime.pb(i);
}
int main()
{       fastIO
       // sieve();
        ll test,n,ans,i;
        cin>>test;
        while(test--)
        {
            cin>>n;
            ans=1;
            ll n1=n;
            i=0;
            for(ll p=1;p*p<=n;p++)
            {
                if(n%p==0)
                {
                    if(p==n/2)
                    {
                    	i++;
                    	ans+=(n/p);
                    	break;
                    }
	                ans+=(n/p);
                    i++;
                    
                    
                }
            }
            ans+=(n*(((n-1)/2-i)));
            ans*=n;
            cout<<ans<<"\n";
        }
 
        return 0;
}