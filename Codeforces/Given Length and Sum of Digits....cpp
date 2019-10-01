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
ll n,m,dig,mo,i,x;
cin>>n>>m;
deque<ll>v;
deque<ll>v1;
dig=m/9;
for(i=0;i<dig;i++)
v.push_back(9);
if(m%9!=0)
{
	mo=m%9;
	dig=dig+1;
	v.push_front(mo);
}
//cout<<dig<<endl;
//cout<<v[0]<<endl<<v[1]<<endl;
ll a=0;
//cout<<v.front();
v1=v;
ll w;
if((v.size())>n || ((v.size())==0 && n!=1))
cout<<-1;
else if(v.size()==0 && n==1)
cout<<0;
else
{

	w=n-v.size();
	if(w>=1)
	{
	cout<<1;
	w--;
	for(i=0;i<w;i++)
		cout<<0;

   a=v.front()-1;
   v.pop_front();
   v.push_front(a);
   }
while(v.empty()==false)
	{
		cout<<v.front();
		v.pop_front();
	}

}

cout<<" ";
if((v1.size())>n || ((v1.size())==0 && n!=1))
cout<<-1;
else if(v1.size()==0 && n==1)
cout<<0;
else
{
	w=n-v1.size();
	while(v1.empty()==false)
	{
		cout<<v1.back();
		v1.pop_back();
	}
	for(i=0;i<w;i++)
		cout<<0;
}

}