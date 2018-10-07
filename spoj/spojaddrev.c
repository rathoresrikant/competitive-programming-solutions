#include<stdio.h>
int rev(int);
void main()
{
	int t,j,i;
	scanf("%d",&t);
	int arr[t][2],arr2[t][2];
	for(i=0;i<t;i++)
	scanf("%d%d",&arr[i][0],&arr[i][1]);
	for(i=0;i<t;i++)
	for(j=0;j<2;j++)
	arr2[i][j]=rev(arr[i][j]);
	for(i=0;i<t;i++)
	{
		int s=rev(arr2[i][0]+arr2[i][1]);
		printf("%d\n",s);
	}
}
int rev(int a)
{
	int d,rnum=0;
	while(a!=0)
	{
	d=a%10;
	rnum=rnum*10+d;
	a=a/10;	
	}
	return rnum;
}
