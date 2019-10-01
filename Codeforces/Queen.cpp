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
vector<pair<ll,ll>>adj[100005];
ll arr[100005];
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,a,b,i,parent,j,c,d=0;
cin>>t;
for(i=1;i<=t;i++)
{
cin>>a>>b;
if(a!=-1)
{adj[a].push_back(make_pair(i,b));
arr[i]=b;}
else
parent=i;
}
for(i=1;i<=t;i++)
{
	if(arr[i]==1)
	{
	c=0;
	
	//cout<<i<<"  -";
	for(j=0;j<adj[i].size();j++)
	{
		if(adj[i][j].second==1)    //element should be 1 also
			c++;
	}
	if(c==adj[i].size())
    {
    	cout<<i<<" ";
        d++;
    }
   }
}
if(d==0)
cout<<"-1";
}