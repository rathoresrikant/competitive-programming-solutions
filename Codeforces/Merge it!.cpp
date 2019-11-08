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
ll n,i,x,y,z,t,l,m;
cin>>t;
while(t--)
{
    x=0;y=0;z=0;
    ll arr[1000]={0};
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]%3==0)
        x++;
    else if(arr[i]%3==1)
        y++;
    else 
        z++;
}
if(y>z)
{
l=y-z;
z=z+(l)/3;
// cout<<y<<" "<<z<<"\n";
y=y-(l/3)*2;
}
else
{
    l=z-y;
    y=y+l/3;
    z=z-(l/3)*2;
}
cout<<(x+min(y,z))<<"\n";
}
}