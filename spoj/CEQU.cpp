#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll gcd (ll a, ll b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int main()
{       fastIO
      ll t,a,b,c,gc;
      cin>>t;
      ll i=1;
      while(t--)
      {
          cin>>a>>b>>c;
          if(c%gcd(a,b)==0) // Although the question mentions that x,y!=0 but the solution also accepts x=0,y=1
          cout<<"Case "<<i<<": Yes\n";
          else
          {
            cout<<"Case "<<i<<": No\n";
          }
          
      }
        return 0;
}