#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct customer
{
    ll t;
    ll li;
};
int main()
{
    ll n,l,a,tm=0,count=0;
    cin>>n>>l>>a;
    vector<customer> c(n);
    for(ll i=0;i<n;i++)
    {
        cin>>c[i].t>>c[i].li;
        count+=(c[i].t-tm)/a;
        tm=c[i].t+c[i].li;

    }
    cout<<count+((l-tm)/a);
    return 0;

}
