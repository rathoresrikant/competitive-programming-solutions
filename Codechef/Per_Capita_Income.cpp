/*
Chefland consists of N provinces (numbered 1 through N) connected by M
bidirectional roads (numbered 1 through M). For each valid i, the i-th 
road connects provinces Ui and Vi. It is possible to travel from each
province to any other province using these roads.

For each valid i, the annual income of the i-th province is Ai and its
 population is Bi. The per-capita income of some provinces is lower than
  that of some other provinces. For this reason, the king of Chefland 
wants to choose one or more provinces to keep in his kingdom and abandon
the rest, in such a way that the per-capita income of the whole resulting 
kingdom, i.e. the sum of annual incomes of the chosen provinces divided 
by the sum of their populations, would be maximum possible. However, 
it should also be possible to travel from each of the chosen provinces 
to any other chosen province without visiting any of the abandoned 
provinces. Among all such ways to form the new kingdom, the king would 
prefer the number of chosen provinces to be as large as possible.

Can you help the king choose which provinces should form the new kingdom? 
If there are multiple solutions that maximise the per-capita income, you 
should choose one with the maximum number of chosen provinces. 
If there are still multiple solutions, you may choose any one.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void dfs(ll n,vector<vector<ll>> & graph,vector<ll> &vis,vector<ll> & answer)
{
	vis[n]=1;
	answer.push_back(n);
	for(ll i=0;i<graph[n].size();i++)
	{
		if(vis[graph[n][i]]==0)
		{
			dfs(graph[n][i],graph,vis,answer);
		}
	}
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=0;
    cin>>t;
    while(t--)
    {
    	ll n,m;
    	cin>>n>>m;
    	vector<double> inc(n);
    	vector<double> pop(n);
    	for(ll i=0;i<n;i++)
    	{
    		cin>>inc[i];
    	}
    	for(ll i=0;i<n;i++)
    	{
    		cin>>pop[i];
    	}
    	ll index=0;
    	for(ll i=1;i<n;i++)
    	{
    		if((inc[index]/double(pop[index]))<(inc[i]/double(pop[i])))
    		{
    			index=i;
    		}
    	}
    	vector<ll> cities;
    	vector<ll> check(n);
    	vector<vector<ll>> graph(n);
    	for(ll i=0;i<n;i++)
    	{
    		if((inc[index]/pop[index])==(inc[i]/pop[i]))
    		{
    			cities.push_back(i);
    			check[i]=1;
    		}
    	}
		/*for(ll i=0;i<cities.size();i++)
		{
			cout<<cities[i]<<" ";
		}cout<<'\n';*/
    	for(ll i=0;i<m;i++)
    	{
    		ll u,v;
    		cin>>u>>v;
    		u=u-1;
    		v=v-1;
    		if(check[u]==1 && check[v]==1)
    		{
	    		graph[u].push_back(v);
	    		graph[v].push_back(u);
    		}
    	}
    	vector<ll> vis(n);
    	vector<ll> answer;
    	vector<ll> final;
    	for(ll i=0;i<cities.size();i++)
    	{
    		if(vis[cities[i]]==0)
    		{
    			dfs(cities[i],graph,vis,answer);
    		}
    		if(answer.size()>final.size())
    		{
    			final=answer;
    		}
    		answer.clear();
    	}
    	cout<<final.size()<<'\n';
    	for(ll i=0;i<final.size();i++)
    	{
    		cout<<final[i]+1<<" ";
    	}cout<<'\n';
    	
    }
    return 0;
}
