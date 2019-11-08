#include<stdio.h>
   int a[1000]={0};
   int c=0;
   int n,ans=0;
int solve(int x,int sum)
{
    if(x>=n)
    {
        if(sum%360==0)
            ans=1;
            return 0;
    }
    solve(x+1,sum+a[x]);
    solve(x+1,sum-a[x]);
}
int main()
{
    int c=0,i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    solve(0,0);
    if(ans==1)
        printf("YES\n");
else
    printf("NO\n");
}
