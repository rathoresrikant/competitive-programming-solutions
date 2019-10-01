#include<stdio.h>
int main()
{
    int n,c=0,i,k,pos;
    int a[100000]={0};
    int b[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d %d",&a[i],&b[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k<=b[i] && k>=a[i])
            pos=i;
    }
    printf("%d\n",(n-pos));

}
