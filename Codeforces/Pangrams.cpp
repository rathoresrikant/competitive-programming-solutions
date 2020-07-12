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
    char * arr=new char [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    bool pangram[26]={0};
    for(int i=0;i<n;i++){
    	if(arr[i]>=65&&arr[i]<=90){
    		pangram[arr[i]-'A']=1;
    	}
    	else if(arr[i]>=97&&arr[i]<=122){
    		pangram[arr[i]-'a']=1;
    	}
    }
    bool ans=true;
    for(int i=0;i<26;i++){
    	if(!pangram[i]){
    		ans=false;
    		break;
    	}
    }
    if(ans){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
}