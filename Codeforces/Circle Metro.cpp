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
ll n,a,b,c,d,i,c1=0,c2=0,di=1;
cin>>n;
ll arr[100005]={0};
ll arr1[100005]={0};
cin>>a>>b>>c>>d;
if(b<a)
{
for(i=a;i<=n;i++)
{
    arr[c1]=i;
    c1++;
}
for(i=1;i<=b;i++)
{
    arr[c1]=i;
    c1++;
}
}
else
{
for(i=a;i<=b;i++)
{
    arr[c1]=i;
    c1++;
}
}
if(d>c)
{
for(i=c;i>=1;i--)
{
    arr1[c2]=i;
    c2++;
}
for(i=n;i>=d;i--)
{
    arr1[c2]=i;
    c2++;
}
}
else
{
    for(i=c;i>=d;i--)
    {
        arr1[c2]=i;
        c2++;
    }
}
// for(i=0;i<c1;i++)
// {
//     cout<<arr[i];
//     cout<<"\n";
// }
// for(i=0;i<c2;i++)
// {
//     cout<<arr1[i];
//     cout<<"\n";
// }
ll x,y;
for(i=0;i<min(c1,c2);i++)
{
   x=arr[i];
   y=arr1[i];
   //cout<<x<<" "<<y<<"\n";
    if(x==y)
    {
        
        di=0;
        break;
    }
}
if(di==0)
cout<<"YES\n";
else
cout<<"NO\n";
}