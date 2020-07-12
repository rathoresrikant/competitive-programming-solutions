#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n=600;
    int* sieve=new bool [n+1]; // of size n +1 as elements start from 0
    for(int i=0;i<n+1;i++){
    	sieve[i]=1;
    }                           // O(n(log(logn)))
    sieve[0]=1;
    sieve[1]=1;

    for(int i=2;i*i<=n;i++){   // i will run fron 0 to sqrt(n)
    	for(int j=i*i;j<=n;j+=i){  // j will start from i*i and will be incremented by i
    		sieve[j]=false;
    	}
    }
    int ans=0;
    for(int i=0;i<n+1;i++){
    	if(sieve[i]){
    		ans++;
    	}
    }
    cout<<ans<<endl;
    delete []sieve;
}