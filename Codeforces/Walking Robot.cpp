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
ll n,b,a,c=0,x,y,a1;
cin>>n>>b>>a;
a1=a;
ll arr[200005];
ll i;
for(i=0;i<n;i++)
cin>>arr[i];
while((b>0 || a>0)&&c<n)
{
x=arr[c];
if(arr[c]==1)
{
	if(b>0)
	{
		if(a==a1)
		{
			if(a>0)
				a--;
			else
				b--;
		}
		else
		{
			a=a+1;
			b--;
		}

	}
	else
	{
		a--;
	}
}
else if(arr[c]==0)
{
   if(a>0)
   {
   	a--;
   }
   else
   	b--;
}
//cout<<b<<" "<<a<<endl;
c++;
}
cout<<c;
}