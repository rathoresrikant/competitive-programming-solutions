#include <cstdio>

const int NMAX=200001;

long long v[NMAX];

int main()
{
 int n;
 scanf("%d ",&n);
 for(int i=0;i<n;i++)
     scanf("%I64d ",&v[i]);
 long long x,f;
 scanf("%I64d %I64d ",&x,&f);
 long long ans=0;
 for(int i=0;i<n;i++)
     {
      long long q=(v[i]+f)/(x+f)+((v[i]+f)%(x+f)!=0)-1;
      ans+=q;
     }
 printf("%I64d\n",ans*f);
}
