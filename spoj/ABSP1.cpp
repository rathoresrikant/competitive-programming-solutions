#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll ABS(ll a[], ll n)
{
    ll sum = 0;
    for (int i = 0; i < n ;i++)
    {
        sum+=( a[i]*i - a[i]*( n-i-1) );
    }
    return sum;
}
int main()
{
    ll t,n,i;
    ll ar[10010];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cout<<ABS(ar,n)<<"\n";
    }
   
        return 0;
}