#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
   long sum;
    cin >> n;
    long *p =new  long[n];
    for(i=0;i<n;i++)
    {
        cin >> p[i];
    }
    sum=0;
       for(i=0;i<=n;i++)
       {
           sum=sum+p[i];
       }
    cout << sum;
    return 0;

}