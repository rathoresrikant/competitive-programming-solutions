#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
	int t,i,j,c,n,c2;
	long st,et;
	map<long,long> time;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=1;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%ld%ld",&st,&et);
			time[st]=et;
		}
		
		map<long,long> :: iterator itr;
		map<long,long>:: iterator itr2;
		for(itr=time.begin();itr!=time.end();itr++)
		{
			c2=0;
			for(itr2=itr;itr2!=time.end();itr2++)
			{
				if(itr2->first<itr->second&&itr2->second>=itr->second)
				c2++;
			}
			if(c2>c)
			c=c2;
		}
		printf("%d\n",c);
	}
	return 0;
}
