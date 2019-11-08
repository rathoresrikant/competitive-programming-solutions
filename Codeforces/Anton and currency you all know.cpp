#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pie 3.14
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll a,b,x,n,flag=0,pt=-1,nf,i;
n=s.length();
a=s[n-1]-'0';
if(a%2==0)
    flag=0;
for(i=0;i<n-1;i++)
{
    b=s[i]-'0';
    if(b%2==0 && b<a)
    {
        pt=i;
        flag=1;
        break;
    }
    else if(b%2==0)
    {
        nf=i;
        flag=1;
    }
}
if(flag==0)
    cout<<-1<<"\n";
else
{
    if(pt!=-1)
    {
        for(i=0;i<pt;i++)
            cout<<s[i];
        cout<<s[n-1];
        for(i=pt+1;i<n-1;i++)
            cout<<s[i];
        cout<<s[pt];
    }
    else
       {
            for(i=0;i<nf;i++)
            cout<<s[i];
        cout<<s[n-1];
        for(i=nf+1;i<n-1;i++)
            cout<<s[i];
        cout<<s[nf];
       }
}
}