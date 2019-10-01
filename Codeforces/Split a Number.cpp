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
string sum(string s1,string s2)
{
    ll n1,n2,i,sum=0,carry=0;
    string str="";
    n1=s1.length();
    n2=s2.length();
    //cout<<s1<<" "<<s2<<"\n";
    if(n1>n2)
        swap(s1,s2);
    n1=s1.length();
    n2=s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    //cout<<s2<<"\n";
    for(i=0;i<n1;i++)
    {
        sum=(s1[i]-'0')+(s2[i]-'0')+carry;
        carry=sum/10;
        sum=sum%10;
        //cout<<sum<<"\n";
        str+=(char)(sum+48);
        //cout<<str<<"\n";
    }
    for(i=n1;i<n2;i++)
    {
        sum=(s2[i]-'0')+carry;
        carry=sum/10;
        sum=sum%10;
        str+=(char)(sum+48);
    }
    //cout<<carry<<"\n";
    if(carry!=0)
    str+=(char)(carry+48);
    reverse(str.begin(),str.end());
    return str;

}
ll compare(string s1,string s2)
{
    if(s1.length()<s2.length())
        return 2;
    else if(s2.length()<s1.length())
        return 1;
    //cout<<"\n";
    //cout<<(s1.compare(s2))<<"\n";
  if(s1.compare(s2)>0)
    return 1;
else
    return 2;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,x,x1,pos1,pos2,x2;
cin>>n;
string str,s1,s2,sum1,sum2;
cin>>str;
    x=n/2;
    if(str[x]!='0')
    {
if(n%2==1)
{
    s1=str.substr(0,x+1);
    s2=str.substr(x+1,n);
    sum1=sum(s1,s2);
    //cout<<compare(s1,s2)<<"\n";
    s1=str.substr(0,x);
    s2=str.substr(x,n);
    sum2=sum(s1,s2);
    //cout<<sum1<<" "<<sum2<<"\n";
    if(compare(sum1,sum2)==2)
        cout<<sum1<<"\n";
    else
        cout<<sum2<<"\n";
    //cout<<s1<<" "<<s2<<"\n";
    //cout<<compare(s1,s2)<<"\n";
}
else if(n%2==0)
{
    s1=str.substr(0,x);
    s2=str.substr(x,n);
    cout<<sum(s1,s2)<<"\n";

}
}
else
{
    x1=x;
    while(x--)
    {
        if(str[x]!='0')
        {
            pos1=x;
            break;
        }
    }
    while(x1++)
    {
        if(str[x1]!='0')
        {
            pos2=x1;
            break;
        }
    }
    //cout<<pos1<<" "<<pos2<<"\n";
    s1=str.substr(0,pos1);
    s2=str.substr(pos1,n);
        sum1=sum(s1,s2);
    //cout<<s1<<" "<<s2<<"\n";
    s1=str.substr(0,pos2);
    s2=str.substr(pos2,n);
    //cout<<s1<<" "<<s2<<"\n";
    sum2=sum(s1,s2);
    if(compare(sum1,sum2)==2)
        cout<<sum1<<"\n";
    else
        cout<<sum2<<"\n";

}
}