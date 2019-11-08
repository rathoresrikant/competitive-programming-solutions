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
ll i,c1=0,c2=0,x=0,n,m;
string s1,s2;
cin>>s1>>s2;
n=s1.length();
m=s2.length();
ll arr[1000005]={0};
for(i=0;i<m;i++)
{
if(s2[i]=='1')
     c1++;
}
for(i=0;i<n;i++)
{
     if(s1[i]=='1')
          arr[i+1]=arr[i]+1;
     else
          arr[i+1]=arr[i];
}
// for(i=1;i<=n;i++)
// cout<<arr[i]<<" ";
// cout<<"\n";
for(i=m;i<=n;i++)
{
     if(((arr[i]-arr[i-s2.length()])%2)==(c1%2))
          x++;
}
cout<<x<<"\n";
}