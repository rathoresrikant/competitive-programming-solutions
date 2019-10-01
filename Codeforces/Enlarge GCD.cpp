#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
#define MAXN 15000005
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
int spf[MAXN];
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
        spf[i] = i; 
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        { 
            for (ll j=i*i; j<MAXN; j+=i) 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
vector<ll> getFactorization(ll x) 
{ 
  //cout<<"hello";
    vector<ll> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
} 
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,x,y,sum=0,ma=-1,gcd=0,i,c=1,ans,m=-1;
ll arr[300005];
ll co[MAXN]={0};
vector<ll>v;
cin>>n;
//cout<<"hello";
sieve();
for(i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]>m)
      m=arr[i];
  }
  //cout<<m<<"\n";
 // cout<<__gcd(6,30);
for(i=0;i<n;i++)
  gcd=__gcd(gcd,arr[i]);
//cout<<gcd<<"\n";
ll j;
for(j=0;j<n;j++)
{
  v=getFactorization(arr[j]/gcd);
  auto it=unique(v.begin(),v.end());
  v.resize(distance(v.begin(),it));
for(i=0;i<v.size();i++)
  {
    co[v[i]]++;
    //cout<<v[i]<<"\n";
  }
}
//cout<<co[2];
ma=0;
for(i=1;i<=m;i++)
{
  if(co[i]>ma)
    ma=co[i];
}
//cout<<ma;
cout<<(ma?(n-ma):-1);

}