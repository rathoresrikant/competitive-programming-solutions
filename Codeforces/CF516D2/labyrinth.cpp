#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n,m,s,t,x,y,a,b;
int vis[2005][2005],lc[2005][2005],rc[2005][2005];
char c[2005][2005];
int cnt=0;

int main()
{
    ios
    cin>>n>>m;
    cin>>s>>t;
    cin>>x>>y;

    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c[i][j];
            lc[i][j]=hell;
            rc[i][j]=hell;
        }
    }

    queue<pii> q;
    q.push(make_pair(s,t));
    lc[s][t]=0;
    rc[s][t]=0;
    while(!q.empty())
    {
        a=q.front().first;
        b=q.front().second;

        vis[a][b]=1;
        q.pop();

        if(a+1<=n&&a+1>=1&b>=1&&b<=m&&c[a+1][b]!='*')
        {
            if(lc[a+1][b]>lc[a][b]&&rc[a+1][b]>rc[a][b])
            {
                lc[a+1][b]=lc[a][b];
                rc[a+1][b]=rc[a][b];
                if(lc[a+1][b]<=x&&rc[a+1][b]<=y)
                q.push(make_pair(a+1,b));
            }
        }

        if(a-1<=n&&a-1>=1&b>=1&&b<=m&&c[a-1][b]!='*')
        {
            if(lc[a-1][b]>lc[a][b]&&rc[a-1][b]>rc[a][b])
            {
                lc[a-1][b]=lc[a][b];
                rc[a-1][b]=rc[a][b];
                if(lc[a-1][b]<=x&&rc[a-1][b]<=y)
                q.push(make_pair(a-1,b));
            }
        }

        if(a<=n&&a>=1&b+1>=1&&b+1<=m&&c[a][b+1]!='*')
        {
            if(lc[a][b+1]>lc[a][b]&&rc[a][b+1]>rc[a][b]+1)
            {
                lc[a][b+1]=lc[a][b];
                rc[a][b+1]=rc[a][b]+1;
                if(lc[a][b+1]<=x&&rc[a][b+1]<=y)
                q.push(make_pair(a,b+1));
            }
        }

        if(a<=n&&a>=1&b-1>=1&&b-1<=m&&c[a][b-1]!='*')
        {
            if(lc[a][b-1]>lc[a][b]+1&&rc[a][b-1]>rc[a][b])
            {
                lc[a][b-1]=lc[a][b]+1;
                rc[a][b-1]=rc[a][b];
                if(lc[a][b-1]<=x&&rc[a][b-1]<=y)
                q.push(make_pair(a,b-1));
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(vis[i][j]==1)
            cnt++;
        }
    }

    cout<<cnt;
}
