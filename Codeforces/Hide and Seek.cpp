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
ll a,b,i,c=0;
cin>>a>>b;
ll arr[100005];
ll arr2[100005]={0};
ll arr3[100005]={0};
ll arr4[100005]={0};

for(i=0;i<100005;i++)
	{
		arr3[i]=100005;
		arr4[i]=-1;
	}
for(i=0;i<b;i++)
	{
		cin>>arr[i];
		arr2[arr[i]]++;
		if(arr2[arr[i]]==1)
			arr3[arr[i]]=i;
		 if(arr2[arr[i]]>=1)
			arr4[arr[i]]=i;
	}
for(i=1;i<=a;i++)
{
	if(arr2[i]==0)
		c++;
	//(3,3),(4,4) this type of pairs
}
//cout<<c<<endl;
//there can be 2*(n-1) pairs for n len sequence
//1,2,3,4
//(1,2),(2,3),(3,4),(4,3),(3,2),(2,1)
//we can not start from 1st let of seq
for(i=1;i<=a;i++)
{
	//cout<<arr3[i]<<" "<<arr4[i]<<endl;
}
for(i=1;i<=(a-1);i++)
{
    if(arr3[i]>arr4[i+1])
    	{
    		c++;
    		//cout<<i<<" "<<i+1<<endl;
    	}
    if(arr3[i+1]>arr4[i])
    	{
    		c++;
    		//cout<<i+1<<" "<<i<<endl;
    	}
}
cout<<c<<endl;
}