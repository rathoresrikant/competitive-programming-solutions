#include<bits/stdc++.h>
using namespace std;
 
#define lli long long int   
#define rep(i,a,b)  for(lli i=a;i<b;i++)
#define M 1000000007
 
int main(){
    int n;
    cin>>n;
    lli dp[n][n];
    memset(dp,0,sizeof(dp));
    rep(i,0,n){
        dp[i][0]=i+1;
    }
    rep(i,2,n){
        rep(j,1,(i/2)+1){
            dp[i][j]=(dp[i-2][j-1]+dp[i-1][j])%M;
        }
    }
    
    
    lli fact[n];
    fact[0]=1;
    rep(i,1,n){
        fact[i]=(fact[i-1]*(i+1))%M;
    }
    lli ans=0;
    rep(i,0,n){
        lli temp=(dp[n-1][i]*fact[i])%M;
        ans+=temp;
        ans%=M;
    }
    cout<<ans<<endl;    
    return 0;
}
