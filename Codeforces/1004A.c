#include <stdio.h>

int main()
{
int i,j,f,n,m;
f=0;

scanf("%d",&n);
scanf("%d",&m);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
    if((a[i+1]-(m+a[i]))>=m)
    f++;
    
}
for(i=n-1;i>=1;i--)
{
if(a[i]-m-a[i-1]>m)
f++;
}
printf("%d",f+2);
}
