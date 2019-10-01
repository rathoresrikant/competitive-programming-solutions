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
    string s1,s2,s3="",s4="";
    ll i,flag=1,c1[26]={0},c2[26]={0};
    cin>>s1>>s2;
    // for(i=0;i<s1.length();i++)
    // {
    //     c1[s1[i]-97]++;
    //     if(s1[i]!=s1[i+1])
    //         s4=s4+s1[i];
    // }
    // for(i=0;i<s2.length();i++)
    // {
    //     c2[s2[i]-97]++;
    //     if(s2[i]!=s2[i+1])
    //         s3=s3+s2[i];
    // }
    // for(i=0;i<26;i++)
    // {
    //     if(c2[i]<c1[i])
    //     {
    //         flag=0;
    //         break;
    //     }
    // }
    // //cout<<s3<<"\n";
    // if(s4==s3 && flag==1)
    //     cout<<"YES\n";
    // else
    //     cout<<"NO\n";
    ll j;
    for(i=0,j=0;i<s1.length();)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
            continue;
        }
        else
        {
         if(s2[j]==s2[j-1])
            j++;
        else
            break;
        }
    }
    ll k;
    for(k=j;k<s2.length();k++)
    {
         //cout<<s2[k]<<" "<<s2[j-1]<<"\n";
        if(s2[k]!=s2[j-1])
        {
            flag=0;
            break;
        }
    }
    // cout<<flag;
    if(i==s1.length() && flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
}