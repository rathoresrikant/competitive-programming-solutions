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
ll n,ans,i,j;
ll arr[100005];
cin>>n;
ans=n;
map<ll,ll>f;
for(i=0;i<n;i++)
    cin>>arr[i];
for(i=0;i<n;i++)
{
    ll v=1;
    for(j=0;j<i;j++)
    {
        f[arr[j]]++;
        //cout<<"Hey"<<arr[i]<<" "<<f[arr[i]]<<"\n";
        if(f[arr[j]]==2)
        {
            v=0;
            break;
        }
    }
    //cout<<v<<" for i "<<i<<"\n";
    ll mi=n;
    for(j=n-1;j>=i;j--)
    {
        f[arr[j]]++;
        //cout<<arr[j]<<" "<<f[arr[j]]<<"\n";
        if(f[arr[j]]==1)
            mi=j;
        else
            break;

    }
    if(v==1)
    {
        //cout<<mi<<" "<<i<<"\n";
        ans=min(ans,mi-i);
    }
    f.clear();

}
cout<<ans<<"\n";
}