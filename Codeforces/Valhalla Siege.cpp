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
ll a,b,x,y,z=0;
vector<ll>v;
cin>>a>>b;
ll i,arr[200005],arr1[200005],sum[200005]={0};
for(i=0;i<a;i++)
cin>>arr[i];
for(i=0;i<b;i++)
cin>>arr1[i];
sum[0]=arr[0];
for(i=1;i<a;i++)
    sum[i]=sum[i-1]+arr[i];
for(i=0;i<a;i++)
    v.push_back(sum[i]);
v.push_back(1000000000000000ll);
y=0;
for(i=0;i<b;i++)
{
    x=arr1[i];
    if(x>(sum[a-1]-sum[z]))
        {
            cout<<a<<"\n";
            z=0;
            y=0;
        }
    else
    {
               // cout<<z<<" "<<y<<"\n";
        z=upper_bound(v.begin(),v.end(),x+y)-v.begin()-1;
        if((a-1-z)==0)
            {
                cout<<a<<"\n";
                y=0;
                z=0;
            }
            else
            {
        cout<<(a-z-1)<<"\n";
        y=y+x;
    }
    }


}
}