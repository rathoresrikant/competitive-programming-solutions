#define mq 10000007
#include <iostream>
using namespace std;
typedef long long ll;
ll pow(ll a, ll b){
	ll ans=1;
	while(b!=0){
		if(b%2==1)
			ans = (ans*a)%mq;
		a = (a*a)%mq;
		b/=2;
	}
	return ans;
}
int main() {
	ll n,k;
	cin>>n>>k;
	while(n!=0&&k!=0){
		cout<<(2*(pow(n-1,k)+pow(n-1,n-1)) + pow(n,k) + pow(n,n))%mq<<"\n";
		cin>>n>>k;
	}
	return 0;
}
