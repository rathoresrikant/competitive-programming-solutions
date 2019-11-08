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
ll n,c1=0,c2=0,c3=0,sum1=0,sum2=0,ans=0,c4=0,c5=0,i;
ll arr[200005];
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]==1)
c1++;
else if(arr[i]==-1)
c2++;
else if(arr[i]==0)
c3++;
else if(arr[i]>1)
{
sum1+=arr[i];
c4++;
}
else if(arr[i]<-1)
{
sum2+=arr[i];
c5++;
}
}
 ans+=c3;
ans+=(sum1)-c4;
 //cout<<ans<<"\n";
if((c2%2==1 && c5%2==1)|| c3>=1)
{
    ans+=abs(sum2+c5);
    //cout<<ans<<"\n";
}
else if(c2%2==0 && c5%2==0)
{
    ans+=abs(sum2+c5);
    //cout<<ans<<"\n";
}

else
{
    //cout<<ans<<"\n";
    ans+=abs(sum2+c5)+2;
    //cout<<ans<<"\n";
}
cout<<ans<<"\n";
}