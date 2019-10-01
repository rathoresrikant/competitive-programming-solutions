#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,i,j,x,pro=1;
ll arr[1000005];
ll p[1000005]={0};
cin>>n;
for(i=0;i<n;i++)
    cin>>arr[i];
    x=arr[0];
for(i=1;i<n;i++)
{
    x=__gcd(x,arr[i]);
}
  // cout<<x<<"\n";
    while(x%2==0)
    {
      x=x/2;
      p[2]++;
    }
    for(j=3;j*j<=x;j++)
    {
        //cout<<"hello\n";
        while(x%j==0)
        {
            p[j]++;
            x=x/j;
        }
    }
    if(x!=1)
    pro=2;
    // if(x>2)
    // {
    //     p[x]++;
    // }
for(i=2;i<=1000000;i++)
    {
        pro=pro*(1+p[i]);
    }
    cout<<pro<<"\n";
}
