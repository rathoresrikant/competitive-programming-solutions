#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,i,j,n,c,k,p,c2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=0,c2=0;
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[j]);
		if(arr[j]<0)
		c2++;
	}
		sort(arr,arr+n);
		p=0;
		for(j=0;j<c2-1;j++)
		for(k=p+1;k<c2;k++)
		{
			if(arr[j]==2*arr[k])
			{
				c++;
				p=k;
				break;
			}
		}
		p=c2;
		for(j=c2+1;j<n;j++)
		{
			for(k=p;k<j;k++)
			{
				if(arr[j]==2*arr[k])
				{
					c++;
					p=k;
					break;
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
