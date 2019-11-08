#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~88 88`8b      88    88~~88 88 V8o88 
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
string s;
ll i,c=0,sum=0,c1=0,a=0,z=0,x=0;
ll count[1000005]={0};
cin>>s;
for(i=0;i<s.length();i++)
{
	if((s[i]=='v'))
		a++;
	if(s[i]=='o')
	{
		count[i]+=count[i-1];
		x=count[i];
		a=0;
	}	
		// if((a-1)>0)
		count[i]=x+max(a-1,0ll);
}
// for(i=0;i<s.length();i++)
// cout<<count[i]<<" ";
// cout<<"\n";
// cout<<"\n";
// cout<<c<<"\n";
for(i=0;i<s.length();i++)
{
	if(s[i]=='o')
		sum=sum+(count[i-1])*(count[s.length()-1]-count[i]);
	//cout<<sum<<"\n";
}
cout<<sum<<"\n";
}