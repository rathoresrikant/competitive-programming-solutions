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
queue<ll>q;
ll n,m,k,i,l,s=0,x,c=0,ans=0,ans1=1,k1;
cin>>n>>m>>k;
k1=k;
for(i=0;i<m;i++)
{
    cin>>x;
    q.push(x);
}
//cout<<q.size()<<"\n";
while(q.size()!=0)
{
    ll z=q.front();
    //cout<<"Z is "<<z<<"\n";
    if(z<=k)
    {
        c++;
        q.pop();
    }
    if(c==0)
    {
        k+=ceil((z-k)/(long double)k1)*k1;
    }
    else if(z>(k+ans))
    {
        ans1++;
        k=k+c;
        c=0;
    }
    //cout<<k<<"\n";
}
cout<<(ans1)<<"\n";
}