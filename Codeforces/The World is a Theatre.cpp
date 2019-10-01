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
ll ans=0;
ll arr[100][100];
ll combination(ll x,ll y)
{
    if(y>x)
        return 0;
    if(arr[x][y]!=0)
        return arr[x][y];
if(y==0 || y==x)
    return 1;
arr[x][y]=combination(x-1,y-1)+combination(x-1,y);
return arr[x][y];
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,m,t,i,j;
cin>>n>>m>>t;
for(i=0;i<=n;i++)
{
    for(j=0;j<=m;j++)
        arr[i][j]=0;
}
//nC4*m*((n+m-5)C(t-5))
//cout<<combination(n,4);
for(i=4;i<=(t-1);i++)
{
    ans=ans+combination(n,i)*combination(m,(t-i));
}
cout<<ans;
}