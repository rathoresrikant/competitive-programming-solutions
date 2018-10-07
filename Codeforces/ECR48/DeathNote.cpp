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
    long m;
    cin>>n>>m;
    long *arr=new long [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    long factor=0;
    for(int i=0;i<n;i++){
    	if(arr[i]<factor){
    		cout<<"0"<<" ";
    		factor=factor - arr[i];
    	}
    	else{
    		int ans=(arr[i] - factor)/ m;
    		if(factor!=0){
    			ans++;
    		}

    		if(arr[i]-factor == m){
    			factor=0;
    		}
    		else{
    			factor=m - (arr[i] - fa)%m;
    		}
    		
    		cout<<ans<<" ";
    	}
    }
    delete [] arr;
    
}