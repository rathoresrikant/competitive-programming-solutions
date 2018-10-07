#include <bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,edges;
    cin>>n>>edges;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
    	int c;
    	cin>>c;
    	m[i+1]=c;
    }
    unordered_map<int,vector<int> >output;
    for(int i=0;i<edges;i++){
    	int v1,v2;
    	cin>>v1>>v2;
    	if(m[v1]==m[v2]){
    		continue;
    	}
    	vector<int> temp = output[m[v1]];
    	bool push1=true;
    	for(int i=0;i<temp.size();i++){
    		if(temp[i]==m[v2]){
    			push1=false;
    		}
    	}
    	if(push1){
    		output[m[v1]].push_back(m[v2]);	
    	}
    	temp = output[m[v1]];
    	bool push2=true;
    	for(int i=0;i<temp.size();i++){
    		if(temp[i]==m[v2]){
    			push1=false;
    		}
    	}
    	if(push2){
    		output[m[v2]].push_back(m[v1]);	
    	}
    	
    }
    int ans=INT_MAX;
    int lenght=0;
    unordered_map<int,vector<int> > :: iterator it;
    for(it=output.begin();it!=output.end();it++){
    	cout<<it->first<<" --> ";
    	for(int i=0;i<it->second.size();i++){
    		cout<<it->second[i]<<" ";
    	}
    	cout<<endl;
    }

    if(ans == INT_MAX){
    	ans=min;
    	cout<<ans<<endl;
    }
    else{
    	cout<<ans<<endl;
    }

    
}