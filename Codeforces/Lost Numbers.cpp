#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

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
ll a,b,n,x,y,i,j,k;
ll arr1[10];
map<ll,pair<ll,ll>>arr2;
ll ans[10];
ll arr3[10]={4,8,15,16,23,42};
for(i=0;i<6;i++)
{
	for(j=i+1;j<6;j++)
		arr2[arr3[i]*arr3[j]]=make_pair(arr3[i],arr3[j]);
}
for(i=1;i<=4;i++)
{
	cout<<"? "<<i<<" "<<i+1<<endl;
	cout<<flush;
	cin>>n;
	arr1[i]=n;
}
//cout<<arr1[1]<<endl;
//cout<<arr2[32].first<<endl;
for(i=1;i<=4;i++)
{
x=arr2[arr1[i]].first;
y=arr2[arr1[i]].second;
a=arr2[arr1[i+1]].first;
b=arr2[arr1[i+1]].second;
//cout<<x<<y<<a<<b<<endl;
//4 16 8 42 15 23
if(x==a)
{
	ans[i+1]=arr2[arr1[i]].first;
	ans[i]=arr2[arr1[i]].second;
	ans[i+2]=arr2[arr1[i+1]].second;
}
else if(x==b)
{
	ans[i+1]=arr2[arr1[i]].first;
	ans[i]=arr2[arr1[i]].second;
	ans[i+2]=arr2[arr1[i+1]].first;
}
else if(y==a)
{
	ans[i+1]=arr2[arr1[i]].second;
	ans[i]=arr2[arr1[i]].first;
	ans[i+2]=arr2[arr1[i+1]].second;
}
else if(y==b)
{
	ans[i+1]=arr2[arr1[i]].second;
	ans[i]=arr2[arr1[i]].first;
	ans[i+2]=arr2[arr1[i+1]].first;
}
}
for(i=0;i<=5;i++)
{
	ll c=0;
	for(j=1;j<=6;j++)
	{
		if(arr3[i]==ans[j])
			c++;
	}
	if(c==0)
		ans[6]=arr3[i];
}
cout<<"! ";
for(i=1;i<=6;i++)
cout<<ans[i]<<" ";
cout<<endl;


}