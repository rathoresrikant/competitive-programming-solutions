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
ll a1,a2,k1,k2,n,pl;
cin>>a1>>a2>>k1>>k2>>n;
pl=a1+a2;
ll mi,ma;
mi=(a1)*(k1-1)+(a2)*(k2-1);
if(mi>=n)
cout<<0<<"\n";
else 
cout<<min(n,n-mi)<<"\n";
ll x,y,an;
if(k1<k2)
{
x=min(n/k1,a1); //number of pl rem from 1st team
an=n-x*k1;
y=an/k2;
cout<<min(n,x+y)<<"\n";
}
else
{
x=min(a2,n/k2); //number of pl rem from 1st team
an=n-x*k2;
y=an/k1;
cout<<min(n,x+y)<<"\n";   
}


}