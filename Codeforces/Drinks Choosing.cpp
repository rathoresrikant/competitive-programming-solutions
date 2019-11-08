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
ll n,k,i,flag=0,x,z,c=0;
ll arr[10005]={0};
cin>>n>>k;
for(i=0;i<n;i++)
{
	cin>>x;
	arr[x]++;
}
z=round((double)n/2);
for(i=1;i<=k;i++)
{
z=z-arr[i]/2;
arr[i]=arr[i]%2;
if(arr[i]==1)
c++;
}
//cout<<c<<" "<<z<<"\n";
c=c-z;
cout<<(n-c)<<"\n";
}