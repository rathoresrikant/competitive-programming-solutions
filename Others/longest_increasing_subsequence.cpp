using namespace std;
int *a,dp[1001][1001],n;
const int minm = -100;
int lis(int idx, int last){
    int ans = minm;
    if(idx>=n+1)
        return 0;
    if(a[idx]>a[last])
        ans = 1+lis(idx+1, idx);
    if(dp[idx][last]!=-1)
        return dp[idx][last];
    return dp[idx][last] = max(lis(idx+1, last),ans);
}
int main()
 {
	int t,i,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    a = new int[n+1];
	    a[0] = minm;
	    for(i=0;i<=n;i++){
	        for(j=0;j<=n;j++)
	            dp[i][j]=-1;
	    }
	    //cout<<dp[0][0]<<endl;
	    for(i=1;i<=n;i++)
	        cin>>a[i];
	   cout<<lis(1, 0)<<endl;
	   delete [] a;
	}
	return 0;
}
