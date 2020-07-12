#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int k;
    cin>>k;
    unordered_map<int,pair<int,int> >m;
    for(int j=0;j<k;j++){
    	int n;
    	cin>>n;
    	int sum=0;
    	int *arr=new int [n];
    	for(int i=0;i<n;i++){
    		int num;
    		cin>>num;
    		arr[i]=num;
    		sum=sum+arr[i];
    	}

    	for(int i=0;i<n;i++){
    		if(m.count(sum-arr[i])){
    			if(j+1!=m[sum-arr[i]].first){
				cout<<"YES"<<endl;
    			cout<<j+1<<" "<<i+1<<endl;
    			cout<<m[sum-arr[i]].first<<" "<<m[sum-arr[i]].second<<endl;
    			return 0;  				
    			}
    			
    		}
    		else{
    			m[sum-arr[i]].first=j+1;
    			m[sum-arr[i]].second=i+1;
    		}
    	}
    	delete []arr;

    }
    cout<<"NO"<<endl;
}