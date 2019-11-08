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
ll n,i,c=1;
cin>>n;
ll arr[n+5];
ll ans[n+5]={0};
for(i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n,greater<ll>());
if(arr[0]<(arr[1]+arr[2]))
{
    cout<<"YES\n";
ans[0]=arr[0];
for(i=1;i<n;i++)
{
    if(i%2==1)
        ans[c]=arr[i];
    else
    {
        ans[n-c]=arr[i];
        c++;
    }
}
for(i=0;i<n;i++)
cout<<ans[i]<<" ";
}
else
cout<<"NO\n";
}