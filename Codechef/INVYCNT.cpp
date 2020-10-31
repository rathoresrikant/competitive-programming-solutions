#include<bits/stdc++.h>
using namespace std;
unsigned long long int cal(unsigned long long int x)
{
    x= (x*(x+1))/2;
    return x;
}
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int x=0;x<n;x++)
       cin>>a[x];
       unsigned long long int sum=0;
       for(int x=0;x<n;x++)
       {
           for(int y=0;y<n;y++)
           {
               if(y!=x)
               {
                   if(y<x)
                   {
                           if(a[y]<a[x])sum+=cal(k-1);
                   }
                   else
                   {if(a[y]<a[x])sum+=cal(k);
                   }
                   
               }
           }
       }
       cout<<sum<<endl;
    }
}
