#include <bits/stdc++.h>
using namespace std;

bool IsSubstring(string s1,string s2){
	for(int i=0;i<s2.length();i++){
		bool check=false;
		if(s2[i]==s1[0]){
			int j=0;
			while(j<s1.length()&&i+j<s2.length()){
				if(s2[i+j]!=s1[j]){
					break;
				}
				j++;
			}
			if(j==s1.length()){
				return true;
			}
		}
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
    pair<string,bool> * arr=new pair<string,bool> [n];
    for(int i=0;i<n;i++){
    	cin>>arr[i].first;
    	arr[i].second=true;
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if((j!=i)&&(arr[j].second==true)&&IsSubstring(arr[i].first,arr[j].first)){
    			arr[i].second=false;
    			break;
    		}
    	}
    }
    int ans=0;
    vector<int> output;
    for(int i=0;i<n;i++){
    	if(arr[i].second){
    		ans++;
    		output.push_back(i+1);
    	}
    }
    cout<<ans<<endl;
    for(int i=0;i<output.size();i++){
    	cout<<output[i]<<" ";
    }
    cout<<endl;
}