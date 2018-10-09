#include <bits/stdc++.h>
#include<cmath>
using namespace std;

void bonAppetit()
{
    int n,k,bill[100000],b,i,s=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>bill[i];
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(i!=k)
            s=s+bill[i];
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
    bonAppetit();
    return 0;
}

