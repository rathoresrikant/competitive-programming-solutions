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
    int*arr=new int [2*n];
    for(int i=0;i<2*n;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+2*n);
    int ans = ((arr[n-1]-arr[0])*(arr[2*n -1]-arr[n]));
    cout<<ans<<endl;
    delete [] arr;
}