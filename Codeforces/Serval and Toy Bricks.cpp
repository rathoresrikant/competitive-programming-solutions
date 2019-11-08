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
ll n,m,h,i,j;
ll arr1[110];
ll arr2[110];
ll arr3[110][110];
cin>>n>>m>>h;
for(i=0;i<m;i++)
cin>>arr1[i];
for(i=0;i<n;i++)
cin>>arr2[i];
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		cin>>arr3[i][j];
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		{   if(arr3[i][j]==1)
		arr3[i][j]=min(arr1[j],arr2[i]);
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		cout<<arr3[i][j]<<" ";
	cout<<"\n";
}

}