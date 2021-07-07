#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    map<ll,ll>m;
    while(t--)
    {
        m.clear();
        cin>>n;
        ll arr[n],counter=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m[x]++;
            if(m[x]<=1)
                arr[counter++]=x;
        }
        sort(arr,arr+counter);
       /* for(ll i=0;i<counter;i++)
            cout<<arr[i]<<" ";
        cout<<endl; */ 
        ll h1=arr[counter-1],h2=arr[counter-2];
        ll gn_2=arr[0];
        for(ll i=1;i<counter-2;i++)
        {
            gn_2=__gcd(arr[i],gn_2);
        }
        ll a=__gcd(gn_2,h1),b=__gcd(gn_2,h2);
        
        if(counter==1)
        cout<<arr[0]*2<<'\n';
        else
        if(a+h2>b+h1)
        cout<<a+h2<<'\n';
        else
        cout<<b+h1<<'\n';
    }
    return 0;
}
