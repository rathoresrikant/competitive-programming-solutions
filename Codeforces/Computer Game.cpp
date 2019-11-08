#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;

///////////////////////////////////////
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
ll n,k,a,b,x,y,z;
cin>>n>>k>>a>>b;
if((n-k*b)<=0)
cout<<-1<<"\n";
else if((n-k*b)>0)
{
  x=n-k*b-1;
  //cout<<"x is"<<x<<"\n";
  y=a-b;
  z=x/y;
  cout<<min(z,k)<<"\n";
}
}

}