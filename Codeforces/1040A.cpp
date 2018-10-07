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
	ll n,a,b;
	cin>>n>>a>>b;
	ll j,s[n],i;
	for(i=0;i<n;i++){
		cin>>s[i];
	}	
	ll cost = 0;
	for(j=0,i=n-1;j<=i;j++,i--){
		if(s[j]==2){
			if(s[i]==0)
				cost+=a;
			else if(s[i]==1)
				cost+=b;
			else{
				if(j!=i)
					cost += 2*min(a,b);
				else
					cost += min(a,b);
			}
			// cout<<1<<endl;
		}
		else if(s[i]==2){
			if(s[j]==0)
				cost+=a;
			else if(s[j]==1)
				cost+=b;
			else{
				// cost += 2*min(a,b);
				if(j!=i)
					cost += 2*min(a,b);
				else
					cost += min(a,b);
			}
			// cout<<2<<endl;
		}
		else if(s[j]!=s[i]){
			return cout<<-1,0;
		}

	}
	cout<<cost;
	return 0;
}
