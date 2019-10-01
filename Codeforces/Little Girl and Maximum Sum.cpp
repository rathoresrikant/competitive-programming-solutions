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
ll n,m,a,b,i;
ll dp[200005]={0};
ll arr[200005];
cin>>n>>m;
for(i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
while(m--)
{
cin>>a>>b;
dp[a]=dp[a]+1;
dp[b+1]+=-1;
}
for(i=1;i<=(n+1);i++)
dp[i]=dp[i-1]+dp[i];
sort(dp,dp+n+1);
ll sum=0;
for(i=n;i>=1;i--)
{
    sum=sum+dp[i]*arr[i-1];
}
cout<<sum<<"\n";
}