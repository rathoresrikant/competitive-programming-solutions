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
ll t,i,x,y,ans=0;
cin>>t;
string s;
ll arr[100]={0};
for(i=0;i<t;i++)
{
	cin>>s;
	arr[s[0]-'a']++;
}
//cout<<arr['k'-'a']<<endl;
for(i=0;i<26;i++)
{
	if(arr[i]>0)
	{
		x=arr[i]/2;
		y=arr[i]-x;
		//cout<<x<<y<<endl;
		ans=ans+(x*(x-1))/2;
		ans=ans+(y*(y-1))/2;
	}
}
cout<<ans<<"\n";
}