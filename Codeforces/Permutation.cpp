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
ll n,k,l,x,i;
cin>>n>>k;
x=2*n-k*4;
for(i=1;i<x;i+=2)
cout<<(i+1)<<" "<<(i)<<" ";
//cout<<"hello ";
for(i=x+1;i<x+1+4*k;i+=4)
{
    cout<<(i+1)<<" "<<i<<" "<<(i+2)<<" "<<(i+3)<<" ";
}
}