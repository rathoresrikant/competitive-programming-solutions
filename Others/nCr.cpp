#include<bits/stdc++.h>
using namespace std;
int dp[1001][801];
const int m = 1000000007;
int c(int n, int r){
    if(n<0||r<0)
        return 0;
    if(n==r)
        return dp[n][r]=1;
    if(dp[n][r]!=-1)
        return dp[n][r];
    return dp[n][r] = (c(n-1,r)%m+c(n-1,r-1)%m)%m;
}
int main()
 {
	int t, n, r;
	cin>>t;
	memset(dp, -1, sizeof(dp));
    //cout<<dp[2][4];
	while(t--){
	    cin>>n>>r;
	    cout<<c(n,r)<<endl;
	}
	return 0;
}
