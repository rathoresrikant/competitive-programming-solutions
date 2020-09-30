#define MOD 1000000007
#define ll long long

int Solution::uniquePathsWithObstacles(vector<vector<int> > &p) {
    
   
   int m=p.size();
   int n=p[0].size();
    vector<vector<ll> >t(m+1 , vector<ll>(n+1, 0));
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
      
            if(p[i][j]==1)
                t[i+1][j+1]=-1;
        }
    }

    if(t[1][1]==-1)
        return 0;
    for(int j=1;j<n+1;j++)
    {
        if(t[1][j]==0)
            t[1][j]=1;
        else
            break;
    }
    for(int i=2;i<m+1;i++)
    {
        if(t[i][1]==0)
            t[i][1]=1;
        else
            break;
    }
    for(int i=2; i<m+1;i++)
    {
        for(int j=2;j<n+1;j++)
        {
            if(t[i][j]==-1)
                continue;

            if(t[i-1][j]>0)
            t[i][j]=(t[i-1][j] + t[i][j] + MOD)%MOD;

            if(t[i][j-1]>0)
            t[i][j]=(t[i][j-1] + t[i][j] + MOD)%MOD;
        }
    }
    if(t[m][n]>=0)
        return t[m][n];
    else
        return 0;
}
