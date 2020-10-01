#include<bits/stdc++.h>
using namespace std;
vector<int> cf;
int arr[1000010]={0};
void maker()
{
    for(int i=2;i*i*i<=1000000;i++)
    {   
        if(arr[i]==0)
        for(int j=i*i*i;j<=1000000;j+=i*i*i)
        {
            arr[j]=1;
        }

    }
    for(int k=1;k<1000000;k++)
    {
        if(arr[k]==0)
        cf.push_back(k);
    }
}
int binsea(int x)
{
    int l=0,r=cf.size()-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(cf[mid]==x)
        return mid;
        if(cf[mid]<x)
        l=mid+1;
        else
        {
            r=mid-1;
        }
    }
    return -1;
}

int main()
{
    maker();
    int t,n,i;
    i=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<i<<": ";
        if(binsea(n)==-1)
        cout<<"Not Cube Free\n";
        else
        {
            cout<<binsea(n)+1<<"\n";
        }
        i++;
    }
}