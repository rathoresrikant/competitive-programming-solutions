#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
/*
 .d8b.  d8888b. db    db  .d8b.  d8b   db 
d8' `8b 88  `8D `8b  d8' d8' `8b 888o  88 
88ooo88 88oobY'  `8bd8'  88ooo88 88V8o 88 
88~~~88 88`8b      88    88~~~88 88 V8o88 
88   88 88 `88.    88    88   88 88  V888 
YP   YP 88   YD    YP    YP   YP VP   V8P 
                                          
                                          
*/


///////////////////////////////////////
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t,x,y,z,i,a,b,c=0,l,m;
queue<ll>v1;
queue<ll>v2;
cin>>t;
cin>>x;
for(i=0;i<x;i++)
{
     cin>>z;
     v1.push(z);
}
cin>>y;
for(i=0;i<y;i++)
{
     cin>>z;
     v2.push(z);
}
l=v1.front(),m=v2.front();
// v2.push(5);
while(v1.empty()==false && v2.empty()==false)
{
     a=v1.front();
     b=v2.front();
     // if(l==a && m==b && c!=0)
     // {
     //      cout<<-1<<"\n";
     //      return 0;
     // }
     //cout<<a<<" "<<b<<"\n";
     v1.pop();
     v2.pop();
     if(b>a)
     {
       v2.push(a);
       v2.push(b);
     }
     else
     {
          v1.push(b);
          v1.push(a);
     }
     c++;
     if(c>3628802)
     {
          cout<<-1<<"\n";
          return 0;
     }
     // if(c==10)
     //      break;
     //cout<<"hello\n";
}
cout<<c<<" ";
if(v1.empty()==true)
     cout<<2<<"\n";
else
     cout<<1<<"\n";
}