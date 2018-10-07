#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    unordered_map<long long,long long>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    	long long index;
    	cin>>index;
    	long long cost;
    	cin>>cost;
    	if(m.count(index)){
    		if(m[index]<cost){
    			m[index]=cost;
    		}
    	}
    	else{
    		m[index]=cost;
    	}
    }
    int m1;
    cin>>m1;
    for(int i=0;i<m1;i++){
    	long long index;
    	cin>>index;
    	long long cost;
    	cin>>cost;
    	if(m.count(index)){
    		if(m[index]<cost){
    			m[index]=cost;
    		}
    	}
    	else{
    		m[index]=cost;
    	}
    }
    long long ans=0;
    unordered_map<long long,long long> ::iterator i;
    for(i=m.begin();i!=m.end();i++){
    	ans+=i->second;
    }
    cout<<ans<<endl;
}