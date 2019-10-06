/* Problem link
 	https://codeforces.com/contest/1216/problem/B
*/

#include<stdio.h>
#include<limits.h>
int main()
{

        long long int n,e,i,j=0,max,x=0,sum=0;
        scanf("%lld",&n);
        long long int dur[n],index[n];
        for(i=0;i<n;i++)
        {
                scanf("%lld",&dur[i]);

        }

        while(j<n)
        {
                max=0;
                for(i=0;i<n;i++)
                {
                        if(dur[i]>max)
                        {
                                max=dur[i];
                                index[j]=i+1;
                        }
                }
                sum=sum+(x*max+1);

                x++;
                dur[index[j]-1]=0;

                j++;
        }
        printf("%lld\n",sum);
        for(long long int i=0;i<n;i++)
        {
                printf("%lld ",index[i]);
        }

        return 0;
}
