#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,x;
    cin>>n>>x;
    int arr[100001]={0};
    int output[100001]={0};
    for(int i=0;i<n;i++){
    	int num;
    	cin>>num;
    	if(arr[num]==1){
    		cout<<"0"<<endl;
    		return 0;
    	}
    	else{
    		arr[num]=1;
    	}
    }

    int min= INT_MAX;
    for(int i=0;i<100001;i++){
    	if(arr[i]==1){
    		if(((i&x) < 100001) && ((i&x) != i) &&(arr[(i&x)]==1)){
    			if(min>output[i]+output[(i&x)]+1){
    				min=output[i]+ output[(i&x)] +1;
    			}
    		}
    		else{
    			if(((i&x) < 100001) && ((i&x) != i)){
    				arr[(i&x)]=1;
    				output[(i&x)]=output[i]+1;
    			}
    		}
    	}
    }
    if(min==INT_MAX){
    	cout<<"-1"<<endl;
    }
    else{
    	cout<<min<<endl;
    }
}