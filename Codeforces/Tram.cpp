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
ll s,x1,x2;
long double z1,z2;
ll t1,t2;
ll p,d;
cin>>s>>x1>>x2;
cin>>t1>>t2;
cin>>p>>d;
if(p<=x1 && x1<=x2 && d==1)
{
    cout<<min((x2-p)*t1,(x2-x1)*t2);
}
else if(x1<p && d==1 && x1<=x2)
{
    cout<<min(((s-p)+s+x2)*t1,(x2-x1)*t2);

}
else if(x1<=x2 && d==-1)
{
    cout<<min((x2-x1)*t2,(p+x2)*t1);
    //..
}
else if(x1>=x2 && p>=x1 && d==-1)
{
    cout<<min((x1-x2)*t2,(p-x2)*t1);
    //checked
}
else if(x1>=x2 && p<x1 && d==-1)
{
    // 
    cout<<min((x1-x2)*t2,(p+s+s-x2)*t1);
    //checked
}
else if(x1>=x2 && d==1)
{
    cout<<min((x1-x2)*t2,(s-p+s-x2)*t1);
    //checked
}
}