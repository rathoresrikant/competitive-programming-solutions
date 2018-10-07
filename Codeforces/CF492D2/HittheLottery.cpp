#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    long n;
    cin>>n;
    long ans=0;
    ans+=n/100;
    n=n%100;
    ans+=n/20;
    n=n%20;
    ans+=n/10;
    n=n%10;
    ans+=n/5;
    n=n%5;
    ans+=n;
    cout<<ans<<endl;
}