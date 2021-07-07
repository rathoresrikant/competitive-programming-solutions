#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int n,i,j;
    cin >> n;
    int max = n;
    for(i=2; i<=sqrt(n); i++)
    {
        for(j=i; j<n; j++)
        {
            if(i*j <= n)
                max++;
            else
                break;
        }
    }
    cout << max;
    return 0;
}