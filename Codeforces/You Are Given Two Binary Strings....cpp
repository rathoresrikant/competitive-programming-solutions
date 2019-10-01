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
ll t;
cin>>t;
while(t--)
{
	string s1,s2;
	ll pos2=0,pos=0,i,c=0;
	cin>>s1>>s2;
	//cout<<pos<<"\n";
	for(i=s2.length()-1;i>=0;i--)
	{
		if(s2[i]=='1')
		{
			pos2=i;
			break;
		}
	}
	pos2=s2.length()-1-pos2;
	//cout<<pos2<<"\n";
		for(i=s1.length()-pos2-1;i>=0;i--)
	{
		if(s1[i]=='1')
		{
			pos=i;
			break;
		}
		c++;
	}
	 cout<<(c)<<"\n";
}
}