#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define MEM(p, v) memset(p, v, sizeof(p))
#define mp(x,y) make_pair(x,y) 
 
//LLONG_MAX,LLONG_MIN
typedef long int ll;
typedef vector<int> vi;
// bool a[100005][100005];
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
	#endif
	fastio;
	ll m,n,i,j,k,temp,x,y,t,h,q;
	cin >> t;
	while(t--){
		cin>>m>>n>>q;
		map<ll,ll>row,col;
		
		for(i=1;i<=m;i++)
			row[i]=0;

		for(i=1;i<=n;i++)
			col[i]=0;

		while(q--){
			cin>>x>>y;
			row[x] +=1;
			col[y] +=1;
		}
		ll ans=0;
		// cout<<row.size();
		// cout<<col.size();
		ll e1 = 0,e2 =0,o1=0,o2=0; 
		for(auto r:row){
			if(r.second%2==0)
				e1++;
			else 
				o1++;
		}
		for(auto r:col){
			if(r.second%2==0)
				e2++;
			else 
				o2++;
		}
		ans = e1*o2 + e2*o1;
		cout<<ans<<endl;
	}
	return 0;
}  
