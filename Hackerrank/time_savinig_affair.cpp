#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> >adj[10005];
bool visited[10005];
long long int dp[10005];

// Complete the leastTimeToInterview function below.
long long int dijisktra(int src,int dest,int k)
{
    set<pair<int,int> >s;
    s.insert({0,src});

    while(!s.empty())
    {
        pair<int,int>p=*s.begin();
        s.erase(s.begin());

        int u=p.second;
        int t=p.first;
        visited[u]=true;
            if(u==dest)
                return t;
            //cout<<u<<" "<<t<<endl;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            int d=adj[u][i].second;
            //cout<<v<<" "<<d<<endl;
            if(!visited[v])
            {
                //visited[v]=true;
                    if((t/k)%2==0)
                {
                    s.insert({t+d,v});
                }
                else
                {
                    int wt=k-t%k;
                    s.insert({t+d+wt,v});
                }
            }
        }
    }
}

int main()
{
    int n,k,m;
    cin>>n>>k>>m;

    while(m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    memset(dp,INT_MAX,sizeof(dp));
    for(int i=0;i<10005;i++)
        dp[i]=INT_MAX;

    cout<<dijisktra(1,n,k)<<endl;
    /*for(int i=1;i<=n;i++)
        cout<<dp[i]<<" ";*/
    return 0;
}

