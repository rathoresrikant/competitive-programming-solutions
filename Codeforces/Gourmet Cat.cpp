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
ll a,b,c,weaks,a1,b1,c1,x=0,ma=0,i,j,ans,a2,b2,c2;
ll arr1[15]={1,0,0,1,0,0,1,1,0,0,1,0,0,1};
ll arr2[15]={0,1,0,0,0,1,0,0,1,0,0,0,1,0};
ll arr3[15]={0,0,1,0,1,0,0,0,0,1,0,1,0,0};
cin>>a>>b>>c;
weaks=min(a/3,min(b/2,c/2));
a1=max(x,(a-weaks*3));
b1=max(x,b-weaks*2);
c1=max(x,c-weaks*2);
a2=a1;
b2=b1;
c2=c1;
//cout<<(weaks*7)<<endl;

for(i=0;i<7;i++)
{
    a1=a2;b1=b2;c1=c2;
    ans=0;
    for(j=i;j<14;j++)
    {
      if(arr1[j]==1)
        a1--;
    if(arr2[j]==1)
        b1--;
    if(arr3[j]==1)
        c1--;
    if(a1<0 || b1<0 || c1<0)
            break;
    ans++;
    //cout<<ans<<endl;
    }
    if(ans>ma)
        ma=ans;

}
if(ans>ma)
    ma=ans;
//cout<<ma<<endl;
cout<<(weaks*7+ma)<<endl;

}