#include<stdio.h>
int main()
{
    int k=1,i,j,c1=0,c2=0;
    char a[9][9];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            scanf("%1s",&a[i][j]);
            if(a[i][j]=='B')
                c1++;
            else if(a[i][j]=='W')
                c2++;
        }
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(a[i][j]==a[i][j+1])
            {
                k=0;break;
            }
        }
        if(k==0)
            break;
    }
    if(k==0 || c1!=c2)
        printf("NO\n");
    else
        printf("YES\n");

}
