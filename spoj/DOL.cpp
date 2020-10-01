#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll t,n,i;
    cin>>t;
    i=1;
    while(t--)
    {
        cin>>n;
        ll ans=n;
       while(n%2==0)
       {
           n/=2;
           ans=n;
       }

        cout<<"Case "<<i<<": "<<ans<<"\n";
        
    }
    return 0;
}