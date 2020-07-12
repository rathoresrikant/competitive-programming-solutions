#include <iostream>
using namespace std;
typedef long long ll;
ll GCD(ll a, ll b){
	if(b==0)
		return a;
	return GCD(b,a%b);
}
int main() {
	int t;
	ll a,b,gcd;
	cin>>t;
	while(t--){
		cin>>a>>b;
		gcd = a>b?GCD(a,b):GCD(b,a);
		cout<<b/gcd<<" "<<a/gcd<<'\n';
	}
	return 0;
}
