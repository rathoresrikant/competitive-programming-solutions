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
    string s1,s2,s3;
    ll i,flag=1;
    cin>>s1>>s2>>s3;
    ll arr1[27]={0};
    ll arr2[27]={0};
    ll arr3[27]={0};
    for(i=0;i<s1.length();i++)
    {
        arr1[(ll)(s1[i]-'a')]++;
    }
    for(i=0;i<s2.length();i++)
    {
        arr2[(ll)(s2[i]-'a')]++;
    }
    for(i=0;i<s3.length();i++)
    {
        arr1[(ll)(s3[i]-'a')]++;
    }
for(i=0;i<26;i++)
{
    if(arr1[i]<arr2[i])
        flag=0;
}
ll j=0;
for(i=0;i<s2.length();)
{
    if(s2[i]==s1[j])
    {
        i++;
        j++;
    }
    else
        i++;
}
if(j!=s1.length())
flag=0;
if(flag==1)
cout<<"YES\n";
else
cout<<"NO\n";
}
}