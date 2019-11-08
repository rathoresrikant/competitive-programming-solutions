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
ll t;
cin>>t;
while(t--)
{
    ll n,k,i,c=0,s,l,lim;
    ll arr[200005];
    vector<ll>ans;
    ans.clear();
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>arr[i];
for(i=0;i<n;i++)
{
    if(arr[i]%2==1 && c>=1)
        ans.push_back(i);
    if(arr[i]%2==1)
        c++;
}
if(c>=1 || arr[n-1]%2==1)
ans.push_back(i);
s=ans.size();
if(s<k)
cout<<"NO\n";
else
{
    if(s%2==k%2)
    {
    cout<<"YES\n";
    //cout<<s<<"\n";
    for(i=s-k;i<s;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
   }
else
cout<<"NO\n";
}
}
}