#include<stdio.h>
int main()
{int i,n,r,b,a,c;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
c=a;
b=0;
while(a!=0)
{r=a%10;
b=b*10+r;
a=a/10;}
if(b==c)
printf("wins\n");
else
printf("losses\n");
}
return 0;}