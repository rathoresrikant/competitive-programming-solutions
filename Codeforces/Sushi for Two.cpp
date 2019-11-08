#include<stdio.h>
int main()
{
    int n,ma=0,i,ans,c1=0,c2=0;
    int a[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
         c1++;
         ans=(c1>c2)?c2:c1;
         if(ans>ma)
            ma=ans;
         if(a[i+1]==2)
         c2=0;
        }
        else if(a[i]==2)
            {c2++;
            ans=(c1>c2)?c2:c1;
            if(ans>ma)
                ma=ans;
            if(a[i+1]==1)
                c1=0;
            }
    }
    printf("%d\n",ma*2);
}
