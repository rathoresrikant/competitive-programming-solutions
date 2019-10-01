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
ll n,ma=0,i,n1,x=0,y,k;
cin>>n;
n1=n;
if(n==1)
cout<<1<<" "<<0;
else
{
ll a[1000005]={0};
while(n%2==0)
{
	n=n/2;
	if(2>ma)
	a[2]++;
}
for(i=3;i*i<=n;i++)
{
	while(n%i==0)
		{
			n=n/i;
			if(i>ma)
			a[i]++;
		}
}
//cout<<a[2]<<" "<<a[3];
if(n>2)
a[n]++;
k=1;
for(i=2;i<=n1;i++)
{
	if(a[i]>ma)
		ma=a[i];
	if(a[i]>0)
		k=k*i;
}
ll ans;
//cout<<ma;
ans=ceil((long double)log2((long double)ma));
//cout<<ans<<endl;
y=(ll)pow(2,ans);
cout<<k<<" ";
for(i=2;i<=n1;i++)
{
  if(a[i]>0 && a[i]!=y)
  {
  	x=1;
  	break;
  }
}
if(x==1)
cout<<(ans+1)<<endl;
else
cout<<ans<<endl;
}
}