#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int x=0;x<n;x++)
       cin>>a[x];
       sort(a,a+n);
       int mid= n/2;
       int y=mid;
       int x= mid/2;
       int z= y+x;
       if(a[x-1]<a[x]&&a[y-1]<a[y]&&a[z-1]<a[z])
       cout<<a[x]<<" "<<a[y]<<" "<<a[z]<<endl;
       else
       {
           cout<<"-1\n";
       }
       
    }
}
