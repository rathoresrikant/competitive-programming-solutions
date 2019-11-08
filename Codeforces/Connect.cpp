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
char arr[100][100];
ll vis[100][100];
vector<pair<ll,ll>>v;
vector<pair<ll,ll>>v1;
ll dfs(ll x,ll y,ll n)
{
//cout<<x<<" "<<y<<"\n";
     if(x>n || x<1 || y>n || y<1)
          return 0;
     //cout<<"hello";
     if(vis[x][y]==1 || arr[x][y]=='1')
     {
          //cout<<vis[x][y]<<" "<<arr[x][y];
          return 0;
     }
     //cout<<x<<" "<<y<<"\n";
vis[x][y]=1;
v.push_back({x,y});
dfs(x+1,y,n);
dfs(x,y+1,n);
dfs(x-1,y,n);
dfs(x,y-1,n);
return 0;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll x1,y1,i,j,l,x2,y2,ans,mi=mod;
cin>>l;
cin>>x1>>y1;
cin>>x2>>y2;
for(i=1;i<=l;i++)
{
     for(j=1;j<=l;j++)
          cin>>arr[i][j];
}
// for(i=1;i<=l;i++)
// {
//      for(j=1;j<=l;j++)
//           cout<<arr[i][j];
//      cout<<"\n";
// }
//cout<<arr[1][1]<<"\n";
dfs(x1,y1,l);
for(i=0;i<55;i++)
{
     for(j=0;j<55;j++)
          vis[i][j]=0;
}
v1=v;
v.clear();
dfs(x2,y2,l);
for(i=0;i<v.size();i++)
{
     for(j=0;j<v1.size();j++)
     {
          ans=(v[i].first-v1[j].first)*(v[i].first-v1[j].first)+(v[i].second-v1[j].second)*(v[i].second-v1[j].second);
          if(ans<mi)
          {
               //cout<<v[i].first<<" "<<v[i].second<<"\n";
               //cout<<v1[j].first<<" "<<v1[j].second<<"\n";
               //cout<<"Ans is "<<ans<<"\n";
               mi=ans;
          }

     }
}
cout<<mi<<"\n";
}