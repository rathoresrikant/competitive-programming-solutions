#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,string> p1,pair<int,string> p2){
	return p1.first < p2.first;
}

bool IsSubstring(string s1,string s2){
	for(int i=0;i<s2.length();i++){
		if(s2[i]==s1[0]){
			bool check=true;
			int j=1;
			while(j<s1.length()){
				if(i+j<s2.length()&&s2[i+j]==s1[j]){
					j++;
				}
				else{
					break;
				}
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
    if(n==0){
    	cout<<"YES"<<endl;
    	return 0;
    }
    pair<int,string> * arr=new pair<int,string> [n];
    for(int i=0;i<n;i++){
    	string str;
    	cin>>str;
    	arr[i].first=str.length();
    	arr[i].second=str;
    }
    sort(arr,arr+n,compare);
    int prev=0,curr=1;
    while(curr<n){
    	if(!IsSubstring(arr[prev].second,arr[curr].second)){
    		break;
    	}
    	curr++;
    	prev++;
    }
    if(curr==n){
    	cout<<"YES"<<endl;
    	for(int i=0;i<n;i++){
    		cout<<arr[i].second<<endl;
    	}
    }
    else{
    	cout<<"NO"<<endl;
    }
    //cout<<IsSubstring("abab","abacaba")<<endl;
}