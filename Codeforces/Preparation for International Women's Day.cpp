#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,x,i,c=0,ans,y;
    long long int a[100002]={0};
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        a[x%k]++;
    }
    for(i=0;i<=(k/2);i++)
    {
        if(a[i]>=1)
        {
          if(i==0)
                c=c+2*(a[i]/2);
            else if((double)i==((double)k/2))
            {
                c=c+2*(a[i]/2);
            }
          else
          {
              y=k-i;
              ans=min(a[i],a[y])*2;
              c=c+ans;
          }
        }
    }
    printf("%lld\n",c);
    return 0;
}
