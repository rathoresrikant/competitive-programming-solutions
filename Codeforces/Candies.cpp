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
ll n,l=1,r=100000000000000000ll,k,c=0,ans=0,mid,d=0;
cin>>n;
while(l<=r)
{
    mid=(l+r)/2;
    c=0;
    k=n;
    //cout<<mid<<endl;
while((k-mid-k/10)>=0)
{
    d++;
    k=k-mid;
    k=k-k/10;
    c=c+mid;
    if((k-mid-k/10)<=0)
        c=c+k;
    if(c>=((long double)n/2) && k>=0)
    {
        r=mid-1;
        ans=mid;
          // cout<<"A"<<endl;
          //cout<<c<<" "<<k<<endl;
        break;
    }
    else if((k-mid-k/10)<=0 && c<(long double)n/2)
    {
        c=c+k;
        l=mid+1;
        //cout<<"B"<<endl;
          //cout<<c<<" "<<k<<endl;
        break;
    }
}
if(d==0)
r=mid-1;


}
cout<<ans<<endl;
}