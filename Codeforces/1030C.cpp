#include <cstdio>

const int NMAX=101;

char s[NMAX];

bool Can_be_divided(int n,int len,int sum)
{
 int curr_sum=0;
 for(int i=len+1;i<n;i++)
     {
      if(curr_sum+s[i]-'0'<=sum)
         curr_sum+=s[i]-'0';
      else
         if(curr_sum!=sum)
            return false;
         else
            curr_sum=s[i]-'0';
     }
 if(curr_sum!=sum)
    return false;
 return true;
}

int main()
{
 int n;
 scanf("%d ",&n);
 scanf("%s",s);

 int sum=0;
 bool ok=false;
 for(int i=0;i<n-1 && !ok;i++)
     {
      sum+=s[i]-'0';
      if(Can_be_divided(n,i,sum))
         ok=true;
     }
 printf("%s\n",ok?"YES":"NO");
 return 0;
}
