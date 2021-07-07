#include <iostream>
#include<cmath>
using namespace std;

void fun()
{
    int n,k,a[100000],b,i,s=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(i!=k)
            s=s+a[i];
    }
    s=s/2;
    if(s==b)
    {
        cout<<"Bon Appetit";
       
    }
    else
    {
        cout<<abs(b-s);
    }
 
}
int main()
{
    fun();
    return 0;
}

