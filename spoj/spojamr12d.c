#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,l,j,q,f=0;
	char str[20];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		f=0;
		scanf("%s",str);
		l=strlen(str);
		//printf("%d ",l);
		q=l/2;
		for(j=0;j<q;j++)
		if(str[j]!=str[l-j-1])
		{
			f=1;
			break;	
		}
		if(f==0)
		printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
