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
ll t,mi=100000000ll,ma=0,ans,k=1,i;
ll arr[100000];
cin>>t;
for(i=0;i<t;i++)
{
    cin>>arr[i];
    if(arr[i]>ma)
        ma=arr[i];
    if(arr[i]<mi)
        mi=arr[i];
}
ans=ma-mi;
//cout<<ans<<endl;
sort(arr,arr+t);
for(i=1;i<t;i++)
{
 if((arr[i]-arr[i-1])==ans || (arr[i]-arr[i-1])==(double)ans/2 || (arr[i]-arr[i-1])==0)
    k=1;
else
{
    k=0;
    break;
}
}
if(k==0)
cout<<"-1"<<endl;
else
{
if(ans%2==0)
    cout<<ans/2<<endl;
else 
    cout<<ans<<endl;
}
}