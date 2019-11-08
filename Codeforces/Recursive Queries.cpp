#include "bits/stdc++.h"

#ifdef PRINTERS
#include "printers.hpp"
using namespace printers;
#define tr(a)		cerr<<#a<<" : "<<a<<endl
#else
#define tr(a)    
#endif

#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
using namespace std;

int x[10][1000005];

int f(int x){
	if(x<10)return x;
	int prod=1;
	while(x){
		if(x%10)prod*=(x%10);
		x/=10;
	}
	return f(prod);
}

void solve(){
	for(int i=1;i<=1000000;i++){
		x[f(i)][i]++;
	}
	for(int i=1;i<10;i++){
		for(int j=1;j<=1000000;j++){
			x[i][j]+=x[i][j-1];
		}
	}
	int Q;
	cin>>Q;
	while(Q--){
		int l,r,k;
		cin>>l>>r>>k;
		cout<<x[k][r]-x[k][l-1]<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}