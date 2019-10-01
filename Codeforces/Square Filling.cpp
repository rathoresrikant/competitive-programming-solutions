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
ll n,m,i,j;
ll arr[100][100];
ll vis[100][100];
cin>>n>>m;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        vis[i][j]=0;
        cin>>arr[i][j];
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(arr[i][j]==1)
        {
            if(arr[i+1][j]==1 && arr[i][j+1]==1 && arr[i+1][j+1]==1)
            {
                vis[i][j]=1;
                vis[i+1][j]=2;
                vis[i][j+1]=2;
                vis[i+1][j+1]=2;
            }
        }
    }
}
ll flag=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(arr[i][j]==1 && vis[i][j]==0)
            flag=1;
    }
}
ll c=0;
if(flag==1)
cout<<-1<<"\n";
else
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vis[i][j]==1)
            {
                c++;
                //cout<<(i+1)<<" "<<(j+1)<<"\n";
            }
        }
    }
    cout<<c<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vis[i][j]==1)
            {
                //c++;
                cout<<(i+1)<<" "<<(j+1)<<"\n";
            }
        }
    }

}
}