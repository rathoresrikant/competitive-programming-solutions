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
vector<ll>adj[100005];
bool visited[100005];
priority_queue<ll, vector<ll>,greater<ll> > p;
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
//whenever there is need to arrange something in graph in ascending or descending order
//start thinking about priority queue
ll n,m,i,a,b,x=1,c=0;
cin>>n>>m;
for(i=1;i<=100005;i++)
visited[i]=false;
for(i=0;i<m;i++)
{
	cin>>a>>b;
	if(a!=b)
	{
	adj[a].push_back(b);
	adj[b].push_back(a);
    }
}
p.push(x);
while(!p.empty())
{
x=p.top();
cout<<x<<" ";
visited[x]=true;
p.pop();
while(!adj[x].empty())
{
if(visited[adj[x].back()]==false)
{  
	visited[adj[x].back()]=true;
	p.push(adj[x].back());
}
adj[x].pop_back();
}
}


}