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
ll n,i,a,b,x,sum=0,c=0,s=0;
cin>>n;
vector<pair<ll,ll>>arr;
vector<ll>z;
for(i=0;i<n;i++)
{
    cin>>x;
    s=s+x;
    arr.push_back({x,i+1});
    //cout<<arr[i].second<<"\n";
}
a=arr[0].first;
sort(arr.begin(),arr.begin()+n);
// for(i=0;i<n;i++)
// cout<<arr[i].second<<"\n";
z.push_back(1);
for(i=0;i<n;i++)
{
    if(arr[i].first<=(a/2))
{
    sum=sum+arr[i].first;
    z.push_back(arr[i].second);
    c++;
}
    else
        break;
}
sum=sum+a;
if(sum<=(s/2))
cout<<0<<"\n";
else
{
//cout<<"hello";
cout<<c+1<<"\n";
for(i=0;i<z.size();i++)
cout<<z[i]<<" ";
}
// cout<<sum<<"\n";
}