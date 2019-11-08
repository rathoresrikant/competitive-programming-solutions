#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll n,hcf,c=0,ma=0,k,ans,m=0;
    cin>>n;
    ll i;
    ll arr[1000005]={0};
    ll a[1000005]={0};
    ll b[1000005]={0};
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>m)
                m=arr[i];
        }
        //cout<<m<<endl;
        sort(arr,arr+n);
        ans=arr[0]*arr[n-1];
        for(i=1;i<n-1;i++)
        {
            k=arr[i]*arr[n-1-i];
            if(k!=ans)
            {
                ma=1;
                break;
            }
        }
        k=ans;
        //cout<<ans<<endl;
        ll d=0;
        for(i=2;i*i<=k;i++)
        {
          if(k%i==0 && i!=((double)k/i))
            {
                b[d++]=i;
                b[d++]=k/i;
            }
            else if(k%i==0 && (i==(double)k/i))
                b[d++]=i;
        }
                sort(b,b+d);
        // for(i=0;i<max(n,d);i++)
        // {
        //     cout<<b[i]<<" ";
        // }
        // cout<<"\n";
        // for(i=0;i<max(n,d);i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\n";
        for(i=0;i<max(n,d);i++)
        {
            if(b[i]!=arr[i])
            {
                ma=1;
                break;
            }
        }
        //cout<<ma;
        if(ma==0)
            cout<<k<<"\n";
        else
            cout<<-1<<"\n";

}

}