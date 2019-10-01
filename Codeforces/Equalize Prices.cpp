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
ll t;
cin>>t;
while(t--)
{
  ll n,k,ma=0,mi=100000000000ll,i;
  ll arr[500];
  cin>>n>>k;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i]>ma)
      ma=arr[i];
    if(arr[i]<mi)
      mi=arr[i];
  }
  if((ma-mi)>(2*k))
    cout<<-1<<"\n";
  else
    cout<<(mi+k)<<"\n";

}
}