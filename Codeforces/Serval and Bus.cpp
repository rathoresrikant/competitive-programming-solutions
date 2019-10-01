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
ll n,t,c=0,ans,min=1000005,a,b,pos=0;
cin>>n>>t;
while(n--)
{
	c++;
	cin>>a>>b;
	ans=((t-1)/b)*b+a;
	while(ans>=t && ans>=a)
		{   
		if((ans-b)>=t && (ans-b)>=a)
		ans=ans-b;
	else
		break;
	}
	ans=ans-t;
	while(ans<0)
		{ans=ans+b;}
	//cout<<ans<<endl;
	if(ans<min)
	{
		min=ans;
		pos=c;
	}
}
cout<<pos;
}