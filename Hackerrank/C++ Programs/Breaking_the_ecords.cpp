#include <bits/stdc++.h>

using namespace std;

int * breakingRecords(int a[],int n)
{
    int i,l=a[0],h=a[0];
    static int r[2];
    r[0]=0;
    r[1]=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>h)
        {
            r[0]=r[0]+1;
            h=a[i];
        }
        if(a[i]<l)
        {
            r[1]=r[1]+1;
             l=a[i];
        }
    }
    return r;
}

int main()
{
    int s[1000],n,i;
    int *p;
        cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    p=breakingRecords(s,n);
    for(i=0;i<2;i++)
        cout<<*(p+i)<<' ';
    
      return 0;  
    
}