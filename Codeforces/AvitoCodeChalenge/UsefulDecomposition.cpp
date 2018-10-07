#include <bits/stdc++.h>
using namespace std;

bool case1(int*arr,int n){
	int count1=0;
	bool centrecheck=false;
	for(int i=0;i<100001;i++){
		if(arr[i]==n-1){
			centrecheck=true;
		}
		if(arr[i]==1){
			count1++;
		}
	}
	if(centrecheck&&count1==n-1){
		return true;
	}
	return false;
}

bool case2(int*arr,int n){
	int count1=0,count2=0;
	for(int i=0;i<100001;i++){
		if(arr[i]==3){
			return false;
		}
		if(arr[i]==1){
			count1++;
		}
		if(arr[i]==2){
			count2++;
		}
	}
	if(count1==2&&count2==n-2){
		return true;
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    int arr[100001]={0};
    for(int i=0;i<n-1;i++){
    	int v1,v2;
    	cin>>v1>>v2;
    	arr[v1]++;
    	arr[v2]++;
    }

    bool checkCase1=case1(arr,n);
    if(checkCase1){
    	int centre=0;
    	cout<<"Yes"<<endl;
    	cout<<n-1<<endl;
    	for(int i=0;i<100001;i++){
    		if(arr[i]==n-1){
    			centre=i;
    		}
    	}
    	for(int j=1;j<=n;j++){
    		if(j!=centre){
    			cout<<centre<<" "<<j<<endl;
    		}
    	}
    	return 0;
	}
    bool checkCase2=case2(arr,n);
    if(checkCase2){
    	cout<<"Yes"<<endl;
    	cout<<"1"<<endl;
    	int vertex1=0,vertex2=0;
    	for(int i=0;i<100001;i++){
    		if(arr[i]==1){
    			if(vertex1==0){
    				vertex1=i;
    			}
    			else{
    				vertex2=i;
    			}
    		}
    	}
    	cout<<vertex1<<" "<<vertex2<<endl; 
    	return 0;
    }
    int centre=0,count3=0,count1=0,count2=0;
    vector<int> value1;
	for(int i=0;i<100001;i++){
		if(arr[i]>=3){
			centre=i;
			count3++;
		}
		if(arr[i]==1){
			count1++;
			value1.push_back(i);
		}
		if(arr[i]==2){
			count2++;
		}
	}
	if(count3==1){
		cout<<"Yes"<<endl;
		cout<<count1<<endl;
		for(int i=0;i<value1.size();i++){
			cout<<centre<<" "<<value1[i]<<endl;
		}
		return 0;
	}
    cout<<"No"<<endl;
}