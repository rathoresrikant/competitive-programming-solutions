#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,c=0,i;
scanf("%d",&t);
while(t--)
{
    c=0;
    char a[200]={0};
    scanf("%d",&n);
    scanf("%s",a);
   for(i=0;i<(n/2);i++)
   {
       if(a[i]=='<' && a[n-i-1]=='>')
        c++;
        else
            break;
   }
printf("%d\n",c);
}
}
