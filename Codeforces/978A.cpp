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
	ll n;
	cin>>n;
	ll i,a[n];
	map <ll,ll> m;
	loop(i,0,n){
		cin>>a[i];
		m[a[i]]++;
	}
	cout<<m.size()<<endl;
	loop(i,0,n)
	{
		if(m[a[i]]==1)
			cout<<a[i]<<" ";
		else
			m[a[i]]--;
	}
	return 0;
}
