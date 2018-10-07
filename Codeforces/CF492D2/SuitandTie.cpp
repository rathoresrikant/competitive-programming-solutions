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
	int *arr=new int [2*n];
	for(int i=0;i<2*n;i++){
		cin>>arr[i];
	}
	int start=0,ans=0;
	while(start<2*n){
		int end=start+1;
		if(arr[start]==arr[end]){
			start+=2;
		}
		else{
			for(int i=start+2;i<2*n;i++){
				if(arr[i]==arr[start]){
					end=i;
					break;
				}
			}
			while(end!=start+1){
				swap(arr[end],arr[end-1]);
				end--;
				ans++;
			}
			start++;
		}
	}

	cout<<ans<<endl;

}