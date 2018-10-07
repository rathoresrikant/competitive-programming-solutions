#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define loop(i,a,b) for(i = a; i < b; ++ i)
#define endl "\n"

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	
	ll steps  = ceil(n/((long double)((2*k)+1)));
	cout<<steps<<endl;
	ll i,j;
	for(j=1;j<=k+1;j++){
		vector <ll> v;
		for(ll i = j;i<=n;i+=((2*k) + 1)){
			v.pb(i);	
		}
		if(v.size()==steps){
			if(n-v[v.size()-1]>k)
				continue;
			for(i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}	
			return 0;
		}
	}
	
	return 0;
}
