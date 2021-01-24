#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n];
        //bool c=true;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            if(arr[j]<arr[i])
                sum++;
        }
        if(sum%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

return 0;
}

