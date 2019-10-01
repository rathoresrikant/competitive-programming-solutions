#include<bits/stdc++.h>
using namespace std;
int bfs(vector<int> vec[],int n)
{
	int p,flag=0;
	bool visit[n+1]={0};
	int colr[n+1];
	memset(visit,0,sizeof(visit));
	memset(colr,-1,sizeof(colr));
	for(int i=1;i<=n;++i)
	{
		if(!visit[i]){
			queue<int> q;
			q.push(i);
			colr[i]=1;
			while(!q.empty()){
				 p=q.front();
				q.pop();
				visit[p]=1;
				for(int j=0;j<vec[p].size();++j){
					if(colr[vec[p][j]]==-1){
						colr[vec[p][j]]=!colr[p];}
					else if(colr[vec[p][j]]==colr[p]){
						flag=1;
						break;
					}
					if(!visit[vec[p][j]]){
					  q.push(vec[p][j]);}
				}
				if(flag)
				 break;
			}
		}
		if(flag)
		 break;
	}
	return flag;
}
int main()
{
	ios::sync_with_stdio(false);
	int t,n,m,x,y;
	cin>>t;
	int c=0;
	while(t--)
	{
		c++;
		cin>>n>>m;
		vector<int> vec[n+1];
		for(int i=0;i<m;++i){
			cin>>x>>y;
			vec[x].push_back(y);
			vec[y].push_back(x);
		}
		cout<<"Scenario #"<<c<<":\n";
		if(bfs(vec,n))
		  cout<<"Suspicious bugs found!\n";
		else
		  cout<<"No suspicious bugs found!\n";
	}
	return 0;
}
