#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,p;
    cin>>n>>p;
    char*arr=new char [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    int str=0,end=str+p;
    while(end<n){
    	if(arr[str]!='.'&&arr[end]!='.'&&arr[str]==arr[end]){
    		end++;
    		str++;
    	}
    	else{
    		if(arr[str]=='.'&&arr[end]=='0'){
    			arr[str]='1';
    		}
    		else if(arr[str]=='0'&&arr[end]=='.'){
    			arr[end]='1';
    		}
    		else if(arr[str]=='.'&&arr[end]=='1'){
    			arr[str]='0';
    		}
    		else if(arr[str]=='1'&&arr[end]=='.'){
    			arr[end]='0';
    		}
    		else if(arr[str]=='.'&&arr[end]=='.'){
    			arr[str]='0';
    			arr[end]='1';
    		}
    		break;
    	}
    }
    if(end==n){
    	cout<<"No"<<endl;
    }
    else{
    	for(int i=0;i<n;i++){
    		if(arr[i]=='.'){
    			arr[i]='0';
    		}
    		cout<<arr[i];
    	}
    	cout<<endl;
    }
}