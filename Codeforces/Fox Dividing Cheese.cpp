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
ll a,b,a1,b1,ax=0,ay=0,az=0,bx=0,by=0,bz=0,flag=1,moves=0;
cin>>a>>b;
a1=a;
b1=b;
while(a1%2==0)
{
	a1=a1/2;
	ax++;

}
while(a1%3==0)
{
	a1=a1/3;
	ay++;
}
while(a1%5==0)
{
	a1=a1/5;
	az++;
}
while(b1%2==0)
{
	b1=b1/2;
	bx++;
}
while(b1%3==0)
{
	b1=b1/3;
	by++;
}
while(b1%5==0)
{
	b1=b1/5;
	bz++;
}
if(a1!=b1)
{
	flag=0;
	cout<<-1<<"\n";
}
else
{
	if(bz>az)
	{
      moves=moves+bz-az;
      // bx=bx+2*(bz-az);
	}
	else
	{
		moves=moves+az-bz;
		// ax=ax+2*(az-bz);
	}
	if(by>ay)
	{
      moves=moves+by-ay;
      // bx=bx+(by-ay);
	}
	else
	{
		moves=moves+ay-by;
		// ax=ax+(ay-by);
	}
   moves=moves+abs(ax-bx);
}
if(flag==1)
	cout<<moves<<"\n";
}