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
vector<ll>v;
vector<ll>v1;
ll c=0;
ll dfs(ll x)
{
     auto it=find(v.begin(),v.end(),x);
     if(it==v.end())
     {
          return 0;
     }
     v1.push_back(x);
     //cout<<x<<"\n";
     if(x%2==0)
          dfs(x/2);
      dfs(3*x);
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i,x,a,b;
cin>>n;
for(i=0;i<n;i++)
{
     cin>>x;
     v.push_back(x);
}
for(i=0;i<n;i++)
{
     if(v[i]%3==0)
     a=v[i]/3;
     else
     a=-1;
     b=v[i]*2;
     //cout<<a<<" "<<b<<"\n";
     auto it1=find(v.begin(),v.end(),b);
     auto it2=find(v.begin(),v.end(),a);
     //cout<<it1-v.begin()<<" "<<it2-v.begin()<<"\n";
     if(it1==v.end() && it2==v.end())
     {
     x=v[i];
     break;
}
}
dfs(x);
for(i=v1.size()-1;i>=0;i--)
cout<<v1[i]<<" ";
}