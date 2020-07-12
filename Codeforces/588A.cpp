#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,min,a=0,p=0;
    cin>>n;
    cin>>a>>p;
    min=p;
    sum=a*p;
    for(int i=1;i<n;i++)
    {
        cin>>a>>p;
        if(p<=min)
            {
                sum+=(a*p);
                min=p;
            }
        else
            sum+=(a*min);
    }
    cout<<sum;
return 0;
}
