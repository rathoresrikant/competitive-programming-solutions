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
    vector <ll> adj[100005];
    bool visited[100005];
    ll cost[100005]={0};
    ll mi;
    ll dfs(ll s) 
    {
        visited[s] = true;
        
        for(ll i = 0;i < adj[s].size();++i)    
        {
         if(visited[adj[s][i]] == false)
             {
             	if(cost[adj[s][i]]<mi)
             		mi=cost[adj[s][i]];
             	dfs(adj[s][i]);
             }
        }
        return mi;
    }

    void initialize() {
        for(ll i = 0;i < 100005;++i)
         visited[i] = false;
    }
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//program to find min in all trees add them and print them
//cout<<"hello\n";
ll n,m,i,a,b,ans=0;
cin>>n>>m;
for(i=1;i<=n;i++)
	cin>>cost[i];
for(i=0;i<m;i++)
{
	cin>>a;
	cin>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
initialize();
for(i=1;i<=n;i++)
{
	if(visited[i]==false)
	{
	mi=cost[i];
	ans=ans+dfs(i);
	//cout<<dfs(i)<<endl;
   }
}
cout<<ans;

}