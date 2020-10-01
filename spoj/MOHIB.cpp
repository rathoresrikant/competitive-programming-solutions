#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll t,x,a;
    cin>>t;
    
    while(t--)
    {

        cin>>x>>a;
       ll n=a-x;
       ll s=(n*(n-1))/2;
       ll ans=a*n +n -s;
       cout<<ans<<"\n";
    }
    return 0;
}