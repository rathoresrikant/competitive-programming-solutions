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
ll b,p,f,ma,mi,h,c,x,y,sum=0;
ll t;
cin>>t;
while(t--)
{
    sum=0;
cin>>b>>p>>f;
cin>>h>>c;
if(c>h)
{
x=min(b/2,f);
b=b-x*2;
f=f-x;
sum+=x*c;
y=min(b/2,p);
sum+=y*h;
}
else
{
 x=min(b/2,p);
b=b-x*2;
p=p-x;
sum+=x*h;
y=min(b/2,f);
sum+=y*c;   
}
cout<<sum<<"\n";
}
}