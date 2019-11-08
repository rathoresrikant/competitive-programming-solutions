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
ll p1=31;
ll p2=53;
ll mod1=mod;
ll mod2=mod+2;
ll power(ll n,ll x,ll p)
{
ll pro=1;
while(x!=0)
{
    if(x%2==0)
    {
        n=((n%p)*(n%p))%p;
        x=x/2;
    }
    pro=((pro%p)*(n%p))%p;
    x--;
}
return pro%p;
}
ll myhash(string s,ll ind)
{
    ll hash=0,i,n=s.length();
for(i=0;i<n;i++)
{
    if(ind==1)
    hash=((hash*p1+s[i])%mod1);
    else if(ind==2)
    hash=((hash*p2+s[i])%mod2);
}
return hash;
}
inline pair<ll,ll> change(pair<ll,ll> oldhash,ll pos ,char old, char ne,ll n)
{
    pair<ll,ll> newhash = oldhash;
    ll x,y,z1,z2;
    z1 = power(p1,n-pos-1,mod1);
    z2 = power(p1,n-pos-1,mod1);
    y=((oldhash.first)%mod1+((ne%mod1)*(z1%mod1))%mod1)%mod1;
    y=(y-((old%mod1)*(z1%mod1))%mod1+mod1)%mod1;
    newhash.first=y;
    z2 = power(p2,n-pos-1,mod2);
    y=((oldhash.second)%mod2+((ne%mod2)*(z2%mod2))%mod2)%mod2;
    y=(y-((old%mod2)*(z2%mod2))%mod2+mod2)%mod2;
    newhash.second=y;
 
    return newhash;
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,m,i;
char j;
string s;
unordered_set<ll>hash1;
unordered_set<ll>hash2;
cin>>n>>m;
for(i=0;i<n;i++)
{
cin>>s;
hash1.insert(myhash(s,1));
hash2.insert(myhash(s,2));
}
while(m--)
{
    ll flag=0;
    cin>>s;
    pair<ll,ll>oldhash={myhash(s,1),myhash(s,2)};
    n=s.length();
    for(i=0;i<n;i++)
    {
        for(j='a';j<='c';j++)
        {
            if(s[i]==j)
                continue;
            pair<ll,ll>newhash=change(oldhash,i,s[i],j,n);
            if(hash1.find(newhash.first)!=hash1.end() && hash2.find(newhash.second)!=hash2.end())
                flag=1;
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
}