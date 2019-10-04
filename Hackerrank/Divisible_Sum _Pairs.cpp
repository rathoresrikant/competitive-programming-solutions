#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,k,i,j;
    int count = 0; 
    scanf("%d %d",&n,&k);
    //printf("%d %d\n",n,k);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if((i < j) && ((a[i] + a[j]) % k == 0))
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
