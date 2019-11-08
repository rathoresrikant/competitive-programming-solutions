#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a[1000]={0};
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<(n-2);)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
            i=i+3;
        else
            break;
    }
    //printf("%d\n",i);
    for(;i<(n);)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
            {
                i=i+3;
                printf(" ");
                continue;
            }
            else
                {printf("%c",a[i]);
                i++;}
    }

}
