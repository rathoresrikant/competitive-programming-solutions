#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t>0)
    {
       long long int n,x,s;
        cin>>n>>x>>s;
        
        while(s>0)
        {
            long long int a,b;
            cin>>a>>b;
            if(a==x)
            {
                x=b;
            }
            else if(b==x)
            {
                x=a;
            }
            
           s--; 
        }
        cout<<x<<endl;
        t--;
    }
}
