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
ll t,sum=0,sum1=0,c=0,i;
ll arr[105];
ll arr1[105];
cin>>t;
for(i=0;i<t;i++)
{
  cin>>arr[i];
  sum=sum+arr[i];
  cin>>arr1[i];
  sum1=sum1+arr1[i];
}
if(sum%2==0 && sum1%2==0)
{
  cout<<0<<"\n";
}
else if(sum%2==1 && sum1%2==1)
{
  for(i=0;i<t;i++)
  {
    if(arr1[i]%2!=arr[i]%2)
    {
      c=1;
      break;
    }
  }
  if(c==1)
    cout<<1<<"\n";
  else
    cout<<-1<<"\n";
}
else if((sum%2==0 && sum1%2==1) || (sum1%2==0 && sum%2==1))
{
  cout<<-1;
}
}