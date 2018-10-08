#include<iostream>
using namespace std;
int main()
{
    long long n,m,count=0;
    cin>>n>>m;
    long arr[m+1];
    arr[0]=1;
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    for(int i=1;i<=m;i++){}
        if(arr[i]>arr[i-1])
            count+=(arr[i]-arr[i-1]);
        else if(arr[i]<arr[i-1])
            count+=(n-(arr[i-1]-arr[i]));
    }
    cout<<count;
return 0;
}
