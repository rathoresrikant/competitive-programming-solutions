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
ll n,q,x,ma=-1,a1,a2,y,z,i,c=0,d,l,m;
deque<ll>v;
ll p1[300005]={0};
ll p2[300005]={0};
cin>>n>>q;
for(i=0;i<n;i++)
{
    cin>>x;
    if(x>ma)
        ma=x;
    v.push_back(x);

}
while(1)
{
    a1=v.front();
    v.pop_front();
    a2=v.front();
    v.pop_front();
    p1[c]=a1;
    p2[c]=a2;
    y=max(a1,a2);
    z=min(a1,a2);
    v.push_front(y);
    v.push_back(z);
        c++;
    if(y==ma)
        break;
}
v.pop_front();
//cout<<c<<"\n";
while(q--)
{
    cin>>m;
    if(m<=c)
    {
        cout<<p1[m-1]<<" "<<p2[m-1]<<"\n";
    }
    else
    {
      d=(m-c)%(n-1);
      if(d==0)
        d=(n-1);
      //cout<<d<<"\n";
      cout<<ma<<" "<<v[d-1]<<"\n";
    }
}
}