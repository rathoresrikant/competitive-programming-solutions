// Problem link: https://codeforces.com/contest/1228/problem/A

#include <stdio.h>
 
int main()
{
	long long int l,r,a,flag;
	scanf("%lld %lld",&l,&r);
	for (int i = 0; i < r-l+1; ++i)
	{
		int digit[10]={0};
		flag=1;
		a=l+i;
		long long int b=a;
		while(a>0)
		{
			digit[a%10]++;
			if (digit[a%10]==2)
			{
				flag=0;
				
			}
			a=a/10;
		}
		if (flag==1)
		{
			printf("%lld\n", b);
			break;
		}
 
	}
	if (flag==0)
	{
		printf("-1\n");
	}
	return 0;
}
