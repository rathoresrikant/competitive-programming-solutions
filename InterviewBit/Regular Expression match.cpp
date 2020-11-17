int Solution::isMatch(const string a, const string b) {
    int n=a.length();
    int m=b.length();
    vector<vector<bool>> t(n+1,vector<bool>(m+1));
    for(int i=0;i<=n;i++){
        t[i][0]=false;
    }
    t[0][0]=true;
    for(int i=1;i<=m;i++){
        t[0][i]=true;
        for(int j=1;j<=i;j++){
            if(b[j-1]!='*'){
                t[0][i]=false;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1] || b[j-1]=='?'){
                t[i][j]=t[i-1][j-1];
            }
            else if(b[j-1]=='*'){
                t[i][j]=t[i-1][j] || t[i][j-1];
            }
            else{
                t[i][j]=false;
            }
        }
    }
    return t[n][m];
}
