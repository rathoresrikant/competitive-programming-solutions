#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
string s1,s2,sub,str;
cin>>s1>>s2;
ll n1,n2,i,j,k,l,ans=0;
n1=s1.length();
n2=s2.length();
ll c1[200005]={0};
ll c2[200005]={0};
for(i=0,j=0;i<n1;)
{
    if(s1[i]==s2[j])
    {
        c1[j]=i;
        i++;j++;
    }
    else
        i++;
}
for(i=n1-1,j=n2-1;i>=0;)
{
    if(s1[i]==s2[j])
    {
        c2[j]=i;
        i--;j--;
    }
    else
        i--;
}
for(i=0;i<n2-1;i++)
{
    ans=max(ans,c2[i+1]-c1[i]-1);
}
ans=max(ans,n1-c1[n2-1]-1);
ans=max(ans,c2[0]);
cout<<ans<<"\n";
}
