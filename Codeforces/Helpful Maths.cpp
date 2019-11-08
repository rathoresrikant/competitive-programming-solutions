#include<stdio.h>
#include<ctype.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[110]={0};
    int b[110]={0};
    int i,x,ans=0,c=0;
    scanf("%[^\n\t]s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(isdigit(a[i])==true)
        {
        x=a[i]-'0';
        ans=ans*10+x;

    }
    else if(a[i]=='+')
    {
        b[c++]=ans;
        ans=0;
    }
    }
    b[c++]=ans;
sort(b,b+c);
fflush(stdout);
for(i=0;i<(c-1);i++)
    printf("%d+",b[i]);
    fflush(stdout);
printf("%d",b[c-1]);
}
