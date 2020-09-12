int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    vector<vector<int> >t(n,vector<int>(m));
    for(int i=0;i<m;i++)
    {
            t[0][i]=A[0][i];
    }
    for(int i=0;i<n;i++)
    {
            t[i][0]=A[i][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(A[i][j]==1)
            t[i][j]=min(t[i-1][j] , min(t[i-1][j-1] , t[i][j-1])) + 1;
            else
            t[i][j]=0;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    ans=max(ans,t[i][j]);
    
    return ans*ans;
}
