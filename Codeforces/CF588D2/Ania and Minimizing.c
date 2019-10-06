// Problem Link : https://codeforces.com/contest/1230/problem/B

#include<stdio.h>
#include<string.h>


int main()
{
        long long int n,k,i=1;
        scanf("%lld %lld",&n,&k);
        char a[n+1];
        scanf("%s",a);

        if(n==1 && k!=0)
        {
                printf("0\n");
                return 0;
        }
        if(a[0]!='1' && k!=0)
        {
                a[0]='1';
                k--;
        }



        while(i<n && k>0)
        {
                if(a[i]!='0')
                {
                        a[i]='0';
                        k--;
                }
                i++;
        }

        printf("%s\n",a);
        return 0;
}
