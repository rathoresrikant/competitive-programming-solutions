#include<stdio.h>
int main()
{
    int alice[3]={0};
    int bob[3]={0};
    int i=0,a=0,b=0,c=0;
    for (i=0;i<3;i++)
    {
        scanf("%d",&alice[i]);
    }
    for (i=0;i<3;i++)
    {
        scanf("%d",&bob[i]);
    }
    for (i=0;i<3;i++)
    {
        if (alice[i]>bob[i])
        {
            a=a+1;
        }
        else if (alice[i]==bob[i])
        {
            continue;
        }
        else if (bob[i]>alice[i])
        {
            b=b+1;
        }
    }
    printf("%d %d",a,b);


}
