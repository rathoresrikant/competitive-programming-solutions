#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        //if(a[i]==a[i+1])
         //++i;
         for(int j=i+1;j<n;j++)
         {
             if(a[j]-a[i]==m)
                for(int k=j+1;k<n;k++)
                { if(a[k]-a[j]==m)
                    count++;}
         }

    }
    cout<<count<<endl;
    return 0;
}
