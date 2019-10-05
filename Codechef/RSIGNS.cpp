#include <iostream>
#include <bits/stdc++.h>
#define modulo 1000000007
#define ll long long
using namespace std;
int main() {
    ll t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        ll count=0;
        ll power=k-1;
        ll res=1,fres=2;
        while(power>0)
        {
            if(power%2!=0)
            {
                res=(res*fres)%modulo;
            }
            fres=(fres*fres)%modulo;
            power/=2;
        }

        count=(10*res)%modulo;

        cout<<count<<'\n';
    }
    return 0;
}
