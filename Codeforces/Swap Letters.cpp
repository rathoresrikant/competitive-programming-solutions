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
ll n,n1,n2,i,c1=0,c2=0,ans=0;
string s1,s2;
vector<ll>v1;
vector<ll>v2;
cin>>n;
cin>>s1>>s2;
n1=s1.length();n2=s2.length();
if(n1!=n2)
{
    cout<<-1;
    return 0;
}
for(i=0;i<n1;i++)
{
    if(s1[i]==s2[i])
        continue;
    else if(s1[i]=='a' && s2[i]=='b')
    {
        c1++;
        v1.push_back(i+1);
    }
    else
    {
        c2++;
        v2.push_back(i+1);
    }
}
ans=c1/2+c2/2;
if(c1%2==1 && c2%2==1)
    ans=ans+2;
else if(c1%2==1 || c2%2==1)
    ans=-1;
cout<<ans<<"\n";
if(ans!=-1)
{
if(c1%2==1 && c2%2==1)
{
    for(i=1;i<v1.size();i=i+2)
    cout<<v1[i]<<" "<<v1[i+1]<<"\n";
for(i=1;i<v2.size();i=i+2)
    cout<<v2[i]<<" "<<v2[i+1]<<"\n";
    cout<<v1[0]<<" "<<v1[0]<<"\n";
    cout<<v1[0]<<" "<<v2[0]<<"\n"; 
}
else
{
     for(i=0;i<v1.size();i=i+2)
    cout<<v1[i]<<" "<<v1[i+1]<<"\n";
for(i=0;i<v2.size();i=i+2) 
cout<<v2[i]<<" "<<v2[i+1]<<"\n";  
}
}
}