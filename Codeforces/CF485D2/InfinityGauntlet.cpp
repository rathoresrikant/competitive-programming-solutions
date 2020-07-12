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
    int arr[6]={0};
    for(int i=0;i<n;i++){
    	string str;
    	cin>>str;
    	if(str=="purple"){
    		arr[0]=1;
    	}
    	if(str=="green"){
    		arr[1]=1;
    	}
    	if(str=="blue"){
    		arr[2]=1;
    	}
    	if(str=="orange"){
    		arr[3]=1;
    	}
    	if(str=="red"){
    		arr[4]=1;
    	}
    	if(str=="yellow"){
    		arr[5]=1;
    	}
    }
    int count=0;
    for(int i=0;i<6;i++){
    	if(arr[i]==0){
    		count++;
    	}
    }
    cout<<count<<endl;
    for(int i=0;i<6;i++){
    	if(arr[i]==0){
    		if(i==0){
    			cout<<"Power"<<endl;
    		}
    		if(i==1){
    			cout<<"Time"<<endl;
    		}
    		if(i==2){
    			cout<<"Space"<<endl;
    		}
    		if(i==3){
    			cout<<"Soul"<<endl;
    		}
    		if(i==4){
    			cout<<"Reality"<<endl;
    		}
    		if(i==5){
    			cout<<"Mind"<<endl;
    		}
    	}
    }
}