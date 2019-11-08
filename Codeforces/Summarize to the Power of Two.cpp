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
ll n,i,x,a,b,c,ans,m=-1;
long double k;
ll arr[1000000];
map<ll,ll>ma;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>arr[i];
	ma[arr[i]]++;
	if(m<arr[i])
		m=arr[i];
}
k=log(m)/(long double)log(2);
k=(ll)k;
if((ll)round(pow(2,k))!=m)
k=k+1;
x=(ll)pow(2,k+1);
c=k;
for(i=0;i<n;i++)
{
	k=c;
	k=k+2;
	//cout<<k;
 a=arr[i];
 b=-1;
 while(1)
 {
 	k--;
 	if((ll)pow(2,k)<=a)
 	{
 		ans++;
 		break;
 	}
 	b=(ll)pow(2,k)-a;
 	if(b==a && ma[b]<=1 && ma.count(b))
 	{
 		ans++;
 		break;
 	}
 	if(ma.count(b) && ma[b]>=1)
 		break;
 }
 //cout<<endl;
}
 cout<<ans<<endl;
}