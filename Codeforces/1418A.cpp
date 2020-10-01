#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll ans=0;
        ans+=((k-1+y*k+x-2)/(x-1))+k;
        cout<<ans<<endl;
    }
    return 0;
}
