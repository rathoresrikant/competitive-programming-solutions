#include<bits/stdc++.h>
using namespace std;
void dfs(int s,bool *visited,vector<int> a[]);
int main()
{
	int t,i,j,c,n,e,l,u;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n>>e;
		bool visited[n];
		vector <int> a[n];
		for(i=0;i<n;i++)
		visited[i]=false;
		for(i=0;i<e;i++)
		{
			cin>>l>>u;
			a[l].push_back(u);
			a[u].push_back(l);
		}
		for(i=0;i<n;i++)
		{
			//cout<<visited[i];
			if(visited[i]==false)
			{
				dfs(i,visited,a);
				c++;
		}
		}
		cout<<c<<"\n";
	}
	return 0;
}
void dfs(int s,bool *visited,vector<int> a[])
{
	visited[s]=true;
	for(int i=0;i<a[s].size();i++)
	{
		if(visited[a[s][i]]==false)
		{
			dfs(a[s][i],visited,a);
		}
	}
}
