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
ll n,i,sum1=0,sum2=0,x1=0,x2=0,a=0,b=0;
string s;
cin>>n;
cin>>s;
for(i=0;i<n/2;i++)
{
    if(s[i]=='?')
        x1++;
    else
        sum1=sum1+(s[i]-'0');
}
for(i=n/2;i<n;i++)
{
    if(s[i]=='?')
        x2++;
    else
        sum2=sum2+(s[i]-'0');
}
a=sum1;
b=sum2;
ll k1,k2;
k1=x1;k2=x2;
ll c=0;
while(x1--)
{
    if(c%2==0)
    {
        sum1=sum1+9;
    }
    c++;
}
while(x2--)
{
    if(c%2==1)
    {
        sum2=sum2+9;
    }
    c++;
}
ll sum3=a,sum4=b;
//cout<<sum3<<" "<<sum4<<"\n";
x1=k1;x2=k2,c=0;
while(x1--)
{
if(c%2==1)
{
    sum3=sum3+9; 
}
c++;
}
//cout<<sum3<<" "<<sum4<<"\n";
while(x2--)
{
if(c%2==0)
{
    sum4=sum4+9;
}
c++;
}
    if(sum4>sum3 || sum1>sum2)
        cout<<"Monocarp\n";
    else
        cout<<"Bicarp\n";
}