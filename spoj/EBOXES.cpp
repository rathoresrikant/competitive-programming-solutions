#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{       fastIO
        ll n,k,t,f,a,test,ans;
        cin>>test;
        while(test--)
        {
                cin>>n>>k>>t>>f;
                a=(f-n)/(k-1);  // because  f = (n-a1) + (a1-a2) + (a2-a3) + a3*k ; // this can also be observed deligenlty
                ans=n+a*k; // this can be observed
                cout<<ans<<"\n";
        }

   
        return 0;
}