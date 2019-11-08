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
bool cmp(const pair<ll,ll> &l,const pair<ll,ll> &r)
{
    return l.first<r.first;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll s,b,i,x,y,l=0,m=0,k;
cin>>s>>b;
ll arr[100005];
pair<ll,ll>my[100005];
vector<pair<ll,ll>>v;
for(i=0;i<s;i++)
cin>>arr[i];
for(i=0;i<b;i++)
{
    cin>>x>>y;
    my[i]={x,y};
}
sort(my,my+b);
// for(i=0;i<b;i++)
// cout<<my[i].second<<"\n";
for(i=0;i<b;i++)
{
l=my[i].first;
m=m+my[i].second;
v.push_back({l,m});
}
// cout<<"hello";
// for(i=0;i<b;i++)
// cout<<v[i].first<<" "<<v[i].second<<"\n";
for(i=0;i<s;i++)
{
    auto id=upper_bound(v.begin(),v.end(),pair<ll,ll>(arr[i],-1),cmp);
    k=id-v.begin()-1;
    if(k>=0 && k<=(b-1))
    cout<<v[k].second<<" ";
else
    cout<<0<<" ";

}
}