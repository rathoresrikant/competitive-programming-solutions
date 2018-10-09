#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t,n1;
	ll n,sum,num;
	cin>>t;
	cout<<'\n';
	while(t--){
		cin>>n;
		n1 = n;
		sum=0;
		while(n1--){
			cin>>num;
			sum=(sum+num)%n;
		}
		if(sum%n==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
