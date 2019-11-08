#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

ll q;
ll n;
cin>>q;
while(q--)
{
    ll arr[100005],i,flag1=1,flag2=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<(n-1);i++)
    {
        if(arr[i]==n && arr[i+1]==1)
        continue;
        else if(arr[i+1]==arr[i]+1)
            continue;
        else
        {
            flag1=0;
            break;
        }
    }
   // cout<<flag1<<"\n";
    for(i=1;i<n;i++)
    {
        if(arr[i]==n && arr[i-1]==1)
            continue;
        else if(arr[i-1]==arr[i]+1)
            continue;
        else
        {
            flag2=0;
            break;
        }
    }
    //cout<<flag1<<" "<<flag2<<"\n";
    if(flag1==0 && flag2==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
}
