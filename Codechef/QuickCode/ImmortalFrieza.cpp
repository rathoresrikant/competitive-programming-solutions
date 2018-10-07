#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin>>T;
    while(T--){
    	string str;
    	cin>>str;
    	int n=str.length();
    	int*arr=new int[n];
    	for(int i=0;i<n;i++){
    		if(str[i]=='f'||str[i]=='r'||str[i]=='i'||str[i]=='e'||str[i]=='z'||str[i]=='a'){
    			arr[i]=1;
    		}
    		else{
    			arr[i]=0;
    		}
    	}
    	int count=1;
    	for(int i=0;i<n-1;i++){
    		if(arr[i]==arr[i+1]){
    			count++;
    		}
    		else{
    			cout<<count;
    			count=1;
    		}
    	}
    	cout<<count;
    	cout<<endl;
    	delete []arr;
    }
}