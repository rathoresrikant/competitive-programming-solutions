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
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i,j,c=1,k=0;
cin>>n;
ll arr[1001][1001];
ll ans[n+1];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
        cin>>arr[i][j];
}
for(i=1;i<=n/2+1;i++)
{
    if(c+1<n && k+1<n)
    {
    ans[i]=arr[c][k]*arr[c+1][k]/arr[c+1][k+1];
    ans[i]=sqrt(ans[i]);
    c++;k++;
}
}
c=0;k=1;
for(i=1;i<=n;i++)
{
    ans[i+1]=arr[c][k]/ans[i];
    c++;k++;
}

for(i=1;i<=n;i++)
cout<<(ans[i])<<" ";
}