#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m,p,q,flag = 0;
    cin>>n>>m>>p>>q;
 
    cout<<p<<" "<<q<<endl;
    for(int j=1; j<q; j++)
        cout<<p<<" "<<j<<endl;
    for(int j=q+1; j<=m; j++)
                cout<<p<<" "<<j<<endl;
 
    for(int i=p+1; i<=n; i+=2)
    {
        flag = 0;
        for(int j=m; j>0; j--)
            cout<<i<<" "<<j<<endl;
        for(int k=1; k<=m && i+1<=n; k++)
        {
            flag = 1;
            cout<<i+1<<" "<<k<<endl;
        }
    }
    //flag == 0 start from 1         flag == 1 start from m
 
 
        for(int i=1; i<p; i+=2)
        {
            if(flag == 0)
            {
                for(int j=1; j<=m; j++)
                    cout<<i<<" "<<j<<endl;
                for(int j=m; j>0 && i+1<p; j--)
                    cout<<i+1<<" "<<j<<endl;
            }
            if(flag == 1)
            {
                for(int j=m; j>0; j--)
                    cout<<i<<" "<<j<<endl;
                for(int j=1; j<=m && i+1<p; j++)
                    cout<<i+1<<" "<<j<<endl;
            }
 
        }
 
 
 
 
}
