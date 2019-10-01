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
ll n,m,i,sum=0,ma,mi,ans,m1;
cin>>n>>m;
m1=n;
ll a[100005];
ll b[100005];
for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
for(i=0;i<m;i++)
		cin>>b[i];
sort(a,a+n);
sort(b,b+m);
ma=a[n-1];
mi=b[0];
if(mi<ma)
	cout<<-1<<endl;
else
{
ans=sum*m;
//cout<<ans<<endl;
n--;m--;
while(m>=0)
{
	if(b[m]>ma)
	ans=ans+b[m]-ma;
	//cout<<ans<<endl;
	m--;
}
if(mi==ma)
cout<<ans<<endl;
else
cout<<(ans+ma-a[m1-2]);
}
}