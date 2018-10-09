#define m 100000
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int p[m+1],s[m+1],i,j,t,a[m+1],n,q,l,r;
	cin>>t;
	while(t--){
	    cin>>n>>q;
	    for(i=1;i<=n;i++)
	        cin>>a[i];
	    p[1]  = a[1];
    	p[2] = __gcd(a[1], a[2]);
    	s[n] = a[n];
    	s[n-1] = __gcd(a[n],a[n-1]);
    	for(i=3,j=n-2;i<=n&&j>=1;i++,j--){
    	    p[i] = __gcd(p[i-1], a[i]);
    	    s[j] = __gcd(s[j+1], a[j]);
    	}
    	while(q--){
    	    cin>>l>>r;
    	    if(l==1)
    	        cout<<s[r+1];
    	    else if(r==n)
    	        cout<<p[l-1];
    	    else 
    	        cout<<__gcd(p[l-1],s[r+1]);
    	    cout<<endl;
    	}
	}
	return 0;
}
