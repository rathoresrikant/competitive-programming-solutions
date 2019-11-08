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
ll arr[140000],tree[4*140000];
ll c=0;
ll build(ll node,ll l,ll r,ll n)
{
    if(l==r)
    {
        tree[node]=arr[l];
        //cout<<node<<" "<<arr[l]<<" "<<l<<"\n";
    }
    else
    {
        ll mid;
        mid=(l+r)/2;
        build(2*node,l,mid,n);
        build(2*node+1,mid+1,r,n);
        if(((ll)log2(n)-(ll)log2(node))%2==1)
    {
        tree[node]=tree[2*node]|tree[2*node+1];
    }
    else
    {
        tree[node]=tree[2*node]^tree[2*node+1];
    }

    }
}
ll update(ll node,ll l,ll r,ll pos,ll val,ll n)
{
    if(l==r)
    {
        tree[node]=val;
        arr[l]=val;
    }
    else
    {
        ll m=(l+r)/2;
        if(pos<=m)
            update(2*node,l,m,pos,val,n);
        else
            update(2*node+1,m+1,r,pos,val,n);
    if(((ll)log2(n)-(ll)log2(node))%2==1)
    {
        tree[node]=tree[2*node]|tree[2*node+1];
    }
    else
    {
        tree[node]=tree[2*node]^tree[2*node+1];
    }


    }
}
int main()
{
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll n,q,i,pos,val;
cin>>n>>q;
n=(ll)pow(2,n);
for(i=1;i<=n;i++)
    cin>>arr[i];
build(1,1,n,n);
// for(i=1;i<=(2*n-1);i++)
//     cout<<tree[i]<<"\n";
while(q--)
{
    cin>>pos>>val;
    update(1,1,n,pos,val,n);
    cout<<tree[1]<<"\n";
}
}