#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        count=0;
        cin>>n>>k;
        n+=1;
        int a[n]={0};
        for(int i=1;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            count+=(a[i+1]-a[i])/k;
            if(((a[i+1]-a[i])%k)==0)
                count-=1;
        }
        cout<<count<<endl;
    }
return 0;
}
