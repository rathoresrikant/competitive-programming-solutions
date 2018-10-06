#include<iostream>
using namespace std;

int main(){
	
	long long m,n,a,l,b;
	cin>>n>>m>>a;

	l=(m+a-1)/a;
	b=(n+a-1)/a;
	cout<<l*b;

	return 0;
}
