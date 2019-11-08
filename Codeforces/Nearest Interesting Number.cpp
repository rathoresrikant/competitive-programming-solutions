#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,i,l,sum=0;
cin>>n;
for(i=n;i<=1500;i++)
{
  l=i;
  sum=0;
  while(l!=0)
  {
    sum=sum+l%10;
    l=l/10;
  }
 // cout<<sum<<"\n";
  if(sum%4==0)
  {
    cout<<i;
    break;
  }
}
}