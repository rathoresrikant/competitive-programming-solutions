#include <bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,m,q;
    cin>>n>>m>>q;
    string s,t;
    cin>>s>>t;
    bool arr[1000002];
    for(int i=0;i<=1000001;i++){
    	arr[i]=false;
    }
	for(int i=0;i<n;i++){
		if(s[i]==t[0]&& n-i>=m){
			bool check=false;
			for(int k=0;k<m;k++){
				if(i+k<n && s[i+k]==t[k]){
					check=true;
				}
				else{
					check=false;
					break;
				}
			}
			if(check){
				arr[i]=true;
			}
		}
		
	}

	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
		int ans=0;
		for(int j=l-1;j<=r-1-m+1;j++){
			if(arr[j]){
				ans++;
			}
		}
		
		cout<<ans<<endl;
	}
}