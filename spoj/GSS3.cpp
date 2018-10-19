#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n,q;
int a[100000];
struct pre{
    int prefix=-1000000000;
    int suffix=-1000000000;
    int total=0;
    int ans=-1000000000;
}res,t[400000];

pre merge(pre a , pre b){
    pre temp;
    temp.prefix=max(a.prefix,a.total+b.prefix);
    temp.suffix=max(a.suffix+b.total,b.suffix);
    temp.total=a.total+b.total;
    temp.ans=max(max(a.ans,b.ans),a.suffix+b.prefix);
    return temp;
}
void build(int v,int tl,int tr)
{
    if(tl==tr)
    {
        t[v].prefix=a[tl];
        t[v].suffix=a[tl];
        t[v].total=a[tl];
        t[v].ans=a[tl];
        return ;
    }

    int tm=(tl+tr)/2;
    build(2*v,tl,tm);
    build(2*v+1,tm+1,tr);
    t[v]=merge(t[2*v],t[2*v+1]);
}
pre querry(int v,int tl,int tr,int l,int r)
{
    if(l>tr || r<tl) return res;
    if(l<=tl && tr<=r) return t[v];
    int tm=(tl+tr)/2;
    return merge(querry(2*v,tl,tm,l,r),querry(2*v+1,tm+1,tr,l,r));
}
void update(int v,int tl,int tr,int pos,int val)
{
    if(tl==tr)
    {
        t[v].prefix=val;
        t[v].suffix=val;
        t[v].total=val;
        t[v].ans=val;
        return ;
    }
    else
    {
        int tm=(tl+tr)/2;
        if(pos<=tm)
        update(2*v,tl,tm,pos,val);
        else
        update(2*v+1,tm+1,tr,pos,val);

        t[v]=merge(t[2*v],t[2*v+1]);
    }
}
int main()
{
    ios
    cin>>n;
    int x,y,z;

    for(int i=0;i<n;i++)
    cin>>a[i];

    cin>>q;

    build(1,0,n-1);
    
    //for(int i=1;i<14;i++)
    //cout<<t[i].total<<" "<<t[i].suffix<<" "<<t[i].prefix<<" "<<t[i].ans<<endl;

    while(q--)
    {
        cin>>z>>x>>y;
        if(z==1)
        {
            pre ans1=querry(1,0,n-1,x-1,y-1);
            cout<<ans1.ans<<endl;
        }
        else
        update(1,0,n-1,x-1,y);
    }

}
