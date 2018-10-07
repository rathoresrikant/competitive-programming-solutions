#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    long * arr=new long [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    while(1){
    	int i=0;
    	while(i<n){
    		if(arr[i]<=i){
    			cout<<i+1<<endl;
    			return 0;
    		}
    		i++;
    	}
    	if(i==n){
            long largediv=LONG_MAX;
            for(int j=0;j<n;j++){
                int currdivisor=arr[j]/n;
                if(currdivisor<largediv){
                    largediv=currdivisor;
                }
            }
    		for(int j=0;j<n;j++){
    			arr[j]=arr[j]- largediv*n;
    		}
    	}
    }
}