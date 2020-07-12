#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n,k;
    cin>>n>>k;
    if(n==k)
    {
        if(n==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else if((n/k)%k==0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    }
return 0;
}

