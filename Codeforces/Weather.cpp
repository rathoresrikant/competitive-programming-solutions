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
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
ll n,i,c1=0,c2=0,c3=0,ma,ans=0;
ma=1*1000000000000000000ll;
ll arr[100005];
ll pos[100005];
ll neg[100005];
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]==0)
    c1++;
if(arr[i]>0)
c2++;
if(arr[i]<0)
c3++;
pos[i]=c2;
neg[i]=c3;
}
for(i=0;i<n-1;i++)
{
    ans=0;
    ans+=pos[i];
    //cout<<ans<<"\n";
    ans+=c3-neg[i];
    //cout<<ans<<"\n";
    ans+=c1;
    //cout<<ans<<"\n";
    if(ma>ans)
        ma=ans;
}
cout<<ma<<"\n";
}