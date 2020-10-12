#include<iostream>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[1000000],p;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int min=abs(a[0]-(a[1]));
    for(int i=1;i<n-1;i++)
        {
         p=abs(a[i]-(a[i+1]));
         if(p<min)
           min=p;
        }
        cout<<min;
        return 0;
                }
                