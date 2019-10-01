#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
ll n,a,b,z=0;
ll dp[200005][3];
string str;
ll fuc(ll i,ll p,ll ans)
{
    if(dp[i][p]!=-1)
        return dp[i][p];
    //z++;
if(i>=n)
    return 0;
    if(i==(n-1) && p==1)
        return ans+a+b;
    if(i==(n-1) && p==2)
    {
        //cout<<"coming\n";
        return 1000000000000000000ll;
    }

if(str[i]=='0' && str[i+1]=='0')
{
    if(p==1)
    {
    ans=a+b+fuc(i+1,p,ans);
    dp[i][p]=ans;
}
else
{
ans=a+2*b+fuc(i+1,p,ans);
dp[i][p]=ans;
}
}
else if(str[i]=='0' && str[i+1]=='1')
{
    if(p==1)
    {
    ans=a*2+b+fuc(i+1,2,ans);
    dp[i][p]=ans;
}
else
    //ans+=a;
{
ans=a+2*b+fuc(i+1,2,ans);
dp[i][p]=ans;
}
}
else if(str[i]=='1' && str[i+1]=='1')
{
    if(p==1)
    {
ans=a+b+fuc(i+1,p,ans);
dp[i][p]=ans;
}
else
{
ans=a+2*b+fuc(i+1,p,ans);
dp[i][p]=ans;
}
}
else if(str[i]=='1' && str[i+1]=='0')
{
    //cout<<"Coming\n";
    //cout<<ans<<"\n";
    //cout<<"I is "<<i<<"\n";
    //cout<<"Fuc val is"<<fuc(str,i+2,1,ans)+2*a+2*b<<"\n";
    //cout<<"X"<<(a+2*b)<<"\n";
    ans=a+2*b+min(fuc(i+1,1,ans)+a+b,fuc(i+1,2,ans));
    dp[i][p]=ans;
    
   // cout<<ans<<"\n";
}
//cout<<"Going ans"<<ans<<"\n";
return dp[i][p];

}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t;
cin>>t;
while(t--)
{
    ll x,i,j;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=2;j++)
        dp[i][j]=-1;
    }
    cin>>str;
    x=fuc(0,1,0);
    cout<<(x+b)<<"\n";
    //cout<<z<<"\n";
}
}