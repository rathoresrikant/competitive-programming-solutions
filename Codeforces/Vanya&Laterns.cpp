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
    long l;
    cin>>n>>l;
    long*arr=new long [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    long double start=arr[0]-0;
    long double end=l-arr[n-1];
    long double maximum=INT_MIN;
    for(int i=0;i<n-1;i++){
    	if(arr[i+1]-arr[i]>maximum){
    		maximum=arr[i+1]-arr[i];
    	}
    }
    long double ans=max(maximum/2,max(start,end));
    cout<<setprecision(11)<<ans<<endl; 
}