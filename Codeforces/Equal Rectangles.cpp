#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll q;
cin>>q;
while(q--)
{
    ll n,flag=1,i,x,an,k;
    ll arr[100005]={0};
    vector<ll>v;
    cin>>n;
    for(i=0;i<4*n;i++)
    {
        cin>>x;
        v.push_back(x);
        arr[x]++;
    }
    for(i=1;i<=10000;i++)
    {
        if(arr[i]%2!=0)
            flag=0;  //because n rectangles are not possible then
    }
    sort(v.begin(),v.end());
    an=v[0]*v[4*n-1];
    //cout<<"An is"<<an<<"\n";
    for(i=0;i<4*n;i=i+2)
    {
     k=v[i]*v[4*n-i-1];
     //cout<<k<<"\n";
     if(k!=an)
     {
         flag=0;
         break;
     }
    }
    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
}
