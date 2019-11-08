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
ll n,i,x=0,y=0,z=0,a,b,c;
cin>>n;
string s,s1;
cin>>s;
for(i=0;i<n;i++)
{
    if(s[i]=='(')
        x++;
    else if(s[i]==')')
        y++;
    else
        z++;
}
//cout<<x<<" "<<y<<" "<<z<<"\n";
a=x-y;
b=(z-a)/2;
c=a+b;
z=z-c;
ll l=0;
//cout<<c<<"\n";
for(i=0;i<n;i++)
{
if(s[i]!='?')
    s1+=s[i];
else if(l<z && s[i]=='?')
{
    s1+='(';
    l++;
}
else
s1+=')';
}
l=0;
//cout<<s1<<"\n";
for(i=0;i<n;i++)
{
    if(s1[i]=='(')
        l++;
    else
        l--;
    if(l<=0)
        break;

}
//cout<<l<<" "<<i<<"\n";
if(l==0 && i==(n-1))
cout<<s1<<"\n";
else
cout<<":(\n";

}