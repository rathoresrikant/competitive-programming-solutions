#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
string s;
cin>>s;
int i,count=0;
for(i=0;i<n/2;i++)
{if((s[i]-s[n-i-1]==2)||(s[i]-s[n-i-1]==-2)||(s[i]==s[n-i-1]))
{
    count++;
}
}
if(count==n/2)
{cout<<"YES"<<"\n";
}
else
{cout<<"NO"<<"\n";
}
}
return 0;
}
