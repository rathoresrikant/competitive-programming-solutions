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
vector<ll>v;
ll n;
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll x=1,i,l,c=0,j;
string z;
vector<ll>v;
ll v1[1000005];
ll dp[1000005];
for(i=0;i<1000005;i++)
dp[i]=1000000000000000000ll;
cin>>n;
for(i=0;i<=n;i++)
{
    z=bitset<8>(i).to_string();
    l=stoi(z);
    if(l>n)
        break;
    v.push_back(l);
}
dp[0]=0;

for(i=1;i<v.size();i++)
{
    for(j=1;j<=n;j++)
    {
        //cout<<(j)<<" "<<v[i]<<"\n";
        if(j-v[i]>=0)
        {
        dp[j]=min(dp[j],dp[j-v[i]]+1);
        if(dp[j]>=dp[j-v[i]]+1)
        v1[j]=v[i];
        }
    }
}
cout<<dp[n];
cout<<"\n";
while(n!=0)
{
    cout<<v1[n]<<" ";
    n=n-v1[n];
}
// cout<<v[5];
}