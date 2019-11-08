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
ll n,s,i,k;
vector<pair<ll,ll>>v;
cin>>n>>s;
for(i=0;i<n;i++)
{
	cin>>k;
	v.push_back({k,i+1});
}
vector<ll>ans;
ll l=1,r=n,mid,mans=0,sum,pos=0,flag=0;
while(l<=r)
{
	ans.clear();
sum=0;
mid=(l+r)/2;
for(i=0;i<n;i++)
{
ans.push_back((v[i].first+v[i].second*mid));
}
sort(ans.begin(),ans.end());
for(i=0;i<mid;i++)
{
	sum=sum+ans[i];
}
//cout<<sum<<"\n";
if(sum>s)
r=mid-1;
else
{
l=mid+1;
if(sum>mans)
{
	pos=mid;
	mans=sum;
}
}
}
cout<<pos<<" "<<mans<<"\n";
}