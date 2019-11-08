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
ll n,k,i,x;
vector<ll>v;
cin>>n;
cin>>x;
for(i=0;i<n;i++)
{
k=x%10;
x=x/10;
if(k==4)
{
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
}
else if(k==8)
{
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(7);
}
else if(k==9)
{
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(7);
}
else if(k==6)
{
	v.push_back(3);
	v.push_back(5);
}
else if(k!=1 && k!=0)
	v.push_back(k);

}
sort(v.begin(),v.end(),greater<ll>());
for(i=0;i<v.size();i++)
cout<<v[i];

}