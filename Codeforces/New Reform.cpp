#include<bits/stdc++.h>

using namespace std;

int nodes;
int edges;

void dfs(vector<int> grph[], int u, int vis[])
{

    vis[u]=1;
    nodes++;
    edges+=grph[u].size();

    for(int i=0;i<grph[u].size();i++)
    {
        int nd=grph[u][i];
        if(vis[nd]){continue;}
        dfs(grph,nd,vis);
    }

}

int main()
{

int n,m;
scanf("%d %d",&n,&m);

vector<int> grph[n];

int u,v;
for(int i=0;i<m;i++)
{
    scanf("%d %d",&u,&v);
    grph[u-1].push_back(v-1);
    grph[v-1].push_back(u-1);
}

int vis[n];
for(int i=0;i<n;i++)
{
    vis[i]=0;
}

int cnt=0;

for(int i=0;i<n;i++)
{
    if(!vis[i])
    {
        nodes=0;
        edges=0;
        dfs(grph,i,vis);

        edges/=2;

        if(edges==nodes-1){cnt++;}

    }
}

printf("%d\n",cnt);

return 0;
}
