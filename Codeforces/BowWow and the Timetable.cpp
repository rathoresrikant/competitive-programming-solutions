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
ll x,an,flag=1,i;
string s;
cin>>s;
double ans;
ans=(s.length()-1)/2.0;
//cout<<s.length()<<"\n";
an=(ll)ans;
//cout<<ans<<" "<<an<<"\n";
ll c=0;
for(i=1;i<s.length();i++)
{
    if(s[i]!='0')
    {
        flag=0;
        break;
    }
    else
    {
        c++;
    }
}
if(c%2!=0)
flag=0;
//cout<<flag<<"\n";
if(flag==1)
cout<<an<<"\n";
else
cout<<an+1<<"\n";
}