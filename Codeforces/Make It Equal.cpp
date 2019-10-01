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
ll removeDuplicates(ll arr[], ll n) 
{ 
    if (n==0 || n==1) 
        return n; 
    ll temp[n]; 
    ll j = 0; 
    for (ll i=0; i<n-1; i++) 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
    temp[j++] = arr[n-1]; 
    for (ll i=0; i<j; i++) 
        arr[i] = temp[i]; 
    return j;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,k,ma=-1,mi,i,x,y,a,b,sum=0,c=0;
mi=mod;
ll arr[200005];
ll h[200005]={0};
ll he[200005]={0};
cin>>n>>k;
for(i=0;i<n;i++)
{
	cin>>arr[i];
	h[arr[i]]++;
	if(arr[i]>ma)
		ma=arr[i];
	if(arr[i]<mi)
		mi=arr[i];
	sum=sum+arr[i];
}
sum=sum-mi*n;
he[ma]=h[ma];
for(i=ma-1;i>=0;i--)
{
	he[i]=h[i]+he[i+1];
}
// for(i=ma;i>=1;i--)
// cout<<he[i]<<endl;
// cout<<"\n";
sort(arr,arr+n);
n=removeDuplicates(arr,n);
//remove duplicates from array
b=he[ma];
y=ma;
//cout<<b<<endl<<he[arr[n-2]]<<endl;
ll sum1=0;
while(1)
{
	if(y==mi)
		break;
	while((b+he[y-1])<=k)
	{
       y--;
       if(y==mi)
       	break;
       b=b+he[y];
	}
	  // cout<<b<<endl;
	if(b<=k)
	{
		c++;
		y--;
		sum1=sum1+b;
		b=he[y];
		//cout<<c<<" "<<b<<endl;
	}
if(sum1==sum || y==mi)
	break;
}
cout<<c<<endl;
return 0;
}