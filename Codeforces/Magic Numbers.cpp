#include<bits/stdc++.h>
int main()
{
    int k=1,i;
    char a[10000];
    scanf("%s",a);
    if(a[0]=='1')
    {
    for(i=0;i<strlen(a);)
    {
       if(a[i]=='1')
       {
           if(a[i+1]=='1'|| a[i+1]=='4' || a[i+1]=='\0')
           {
               i++;
               continue;
           }
           else
           {
               k=0;
               break;
           }
       }
       else if(a[i]=='4')
       {
           if(a[i+1]=='1' || a[i+1]=='\0')
           {
               i++;
               continue;
           }
           else if(a[i+1]=='4')
           {

               if(a[i+2]=='1' || a[i+2]=='\0')
               {
                   i=i+2;
                   continue;
               }
               else
               {
                   k=0;
                   break;
               }
           }

       }
       else
       {
           k=0;
           break;
       }

    }
    }
    else
    {
        k=0;
    }
    if(k==0)
        printf("NO\n");
    else
        printf("YES\n");
}
