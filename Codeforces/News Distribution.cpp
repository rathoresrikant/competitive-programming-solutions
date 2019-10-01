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
vector<ll>adj[1000005];
ll vis[1000005]={0};
ll ans[1000005]={0};
ll k[1000005]={0};
ll c;
ll dfs(ll node,ll x)
{
     //cout<<"Node is "<<node<<"\n";
ll i;
if(ans[node]!=0)
return k[ans[node]];
c++;
//cout<<node<<"\n";
ans[node]=x;
vis[node]=1;
for(i=0;i<adj[node].size();i++)
{
     if(vis[adj[node][i]]==0)
     dfs(adj[node][i],x);
}
return c;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,m,x,i,l,j,z;
cin>>n>>m;
for(i=1;i<=m;i++)
{
cin>>x;
if(x>=1)
{
     cin>>z;
     x--;
}
while(x--)
{
     cin>>l;
     adj[z].push_back(l);
     adj[l].push_back(z);
}
//cout<<i<<" "<<adj[i].size()<<"\n";
}
for(i=1;i<=n;i++)
{
     c=0;
     k[i]=dfs(i,i);
}
for(i=1;i<=n;i++)
cout<<k[i]<<" ";
}