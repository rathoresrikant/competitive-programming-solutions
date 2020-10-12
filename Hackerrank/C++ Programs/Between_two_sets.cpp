#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,z=0,a[10],b[10],i,j,c;
    cin>>n>>m;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=1;i<=b[0];i++)
    { c=0;
        if(b[0]%i==0)
        {  
            for(j=0;j<m;j++)
            {
                if(b[j]%i==0)
                {
                    c++;
                }
                
            }
            if(c==m)
            {  c=0;
                for(j=0;j<n;j++)
                {
                    if(i%a[j]==0)
                    {
                      c++;  
                    }
                    
                }
             if(c==n)
                 z++;
            }
        }
        
    }
    cout<<z;
    return 0;
}