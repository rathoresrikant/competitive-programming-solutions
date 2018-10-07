#include <bits/stdc++.h>
using namespace std;



int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,k;
    cin>>n>>k;
    int arr[101]={0};
    for(int i=0;i<n;i++){
    	int num;
    	cin>>num;
    	arr[num]=i+1;
    }
    int count=0;
    for(int i=0;i<101;i++){
    	if(arr[i]>0){
    		count++;
    	}
    }
    if(count>=k){
    	cout<<"YES"<<endl;
    	int check=0;
    	sort(arr,arr+101);
    	for(int i=0;i<101;i++){
    		if(arr[i]>0){
    			cout<<arr[i]<<" ";
    			check++;
    		}
    		if(check==k){
    			break;
    		}
    	}
    	cout<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
}