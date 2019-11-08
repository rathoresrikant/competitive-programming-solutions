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
ll arr1[100005]={0};
ll arr2[100005]={0};
ll dp[100005][2];
ll n;
ll sum(ll x,ll c)
{
    //cout<<"X is"<<x<<"\n";
    //cout<<"C is"<<c<<"\n";
    if(dp[x][c]!=0)
        return dp[x][c];
    if(x>=n)
        return 0;
    if(x==(n-1) && c==0)
    {
        //cout<<arr1[x]<<"\n";
        return arr1[x];
    }
    if(x==(n-1) && c==1)
        return arr2[x];
    //cout<<"hello\n";
  if(c==0)
  {//cout<<"1"<<"\n";
    dp[x][c]=max((arr1[x]+sum(x+1,1)),sum(x+1,0));
    //cout<<dp[x][c]<<"\n";
    return max((arr1[x]+sum(x+1,1)),sum(x+1,0));
}
else
{    //cout<<2<<"\n";
// cout<<max((arr2[x]+sum(x+1,0)),sum(x+1,1))<<"\n";
    dp[x][c]=max((arr2[x]+sum(x+1,0)),sum(x+1,1));
    //cout<<dp[x[c]<<"\n";
    return max((arr2[x]+sum(x+1,0)),sum(x+1,1));
}
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll c,i,j;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr1[i];
}
for(i=0;i<n;i++)
{
cin>>arr2[i];
}
for(i=0;i<100005;i++)
{
    for(j=0;j<2;j++)
        dp[i][j]=0;
}
//cout<<arr1[2]<<"\n";
// if(arr1[0]>arr2[0])
// c=0;
// else
// c=1;
cout<<max(sum(0,1),sum(0,0))<<"\n";
}