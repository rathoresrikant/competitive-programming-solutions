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
for(i=0;i<n1;i++)
{
    for(j=0;j<n1-i+1;j++)
    {
        sub=s1.substr(i,j);
        str=s1.substr(0,i)+s1.substr(j+i,n1);
        //cout<<sub<<" "<<str<<"\n";
        for(k=0,l=0;k<str.length();)
        {
            if(str[k]==s2[l])
            {
                k++;
                l++;
            }
            else
                k++;
        }
        //cout<<l<<" "<<j<<"\n";
        if(l==n2)
            ans=max(ans,j);//s2 is found inside str
    }
}
cout<<ans<<"\n";
}
