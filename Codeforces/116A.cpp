#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int ans=0;
    int max=0;
    while(i<n)
    {
        int a,b;
        cin>>a>>b;
        ans-=a;
        ans+=b;
        if(ans>max)
            max=ans;
        i++;
    }
    cout<<max<<endl;
    return 0;
}