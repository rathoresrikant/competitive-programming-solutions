#include<bits/stdc++.h>
#define ll          long long
#define lli         long long int
#define pb          push_back
#define endl	'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define present(c,x)	((c).find(x) != (c).end())
#define pow9        1000000007
#define rep(i,a,b)	for(lli i=a;i<b;i++)
#define iterate(a)	for(auto ptr = a.begin();ptr!=a.end();ptr++)
#define print(a)	iterate(a){ cout<<*ptr<<"  "; } cout<<endl;
#define setval(a,val)	memset(a,val,sizeof(a))
#define flush       cin.ignore(numeric_limits<streamsize>::max(),'\n')
 
using namespace std;
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	lli n;
	cin>>n;
	lli A[n],B[n],C[n];
	rep(i,0,n)
        cin>>A[i];
    rep(i,0,n)
        cin>>B[i];
    rep(i,0,n)
        cin>>C[i];
    lli ans=0;
    rep(i,0,n){
    lli t=A[i]^B[i];
    lli t1=(t^C[i])+(t&C[i]);
    if(t==t1){
        lli t2=C[i]&(C[i]-1);
        t2=C[i]-t2;
        t1=t1-t2;
    }
 
    ans+=t1;
    }
	cout<<ans<<endl;
	return 0;
}
 
 
