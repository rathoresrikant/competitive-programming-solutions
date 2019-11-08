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
	ll n,n1,i,x,y,flag=0,j,ans,k=0,z,ma=0;
	cin>>n;
	ll arr[2];
	n1=sqrt(n);
	for(i=1;i<=n1;i++)
	{
		if(n%i==0)
		{
			arr[0]=n/i;
			arr[1]=i;
			for(z=0;z<2;z++)
			{
				flag=0;
				//cout<<"X is"<<arr[z]<<"\n";
				for(j=1;(j*j)<=arr[z];j++)
				{
					if(arr[z]%j==0)
					{
						y=arr[z]/j;
						//cout<<"Y is"<<y<<"\n";
						if(((double)sqrt(y)-(ll)sqrt(y))==0)
						{
							flag=1;
							break;
						}
						if(((double)sqrt(j)-(ll)sqrt(j))==0 && j!=1)
						{
							flag=1;
							break;
						}
					}
				}
				//cout<<flag<<"\n";
				if(flag==0)
				{
					k=1;
					if(arr[z]>ma)
						ma=arr[z];
				}
			}
		}
	}
	if(k==0)
		cout<<1<<"\n";
	else
		cout<<ma<<"\n";
}