#include <bits/stdc++.h>
using namespace std;

#define l long 

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,k;
    cin>>n>>k;
    if(n<2){
  		if(k==0){
  			cout<<"1"<<endl;
  		}
  		else{
  			cout<<"-1";
  		}
    }
    else if(n/2 > k){
    	cout<<"-1"<<endl;
    }
    else{
    	int start=k - n/2;
    	cout<<start+1<<" ";
    	l startloop= 2*(start+1);
    	for(int i=1;i<n;i++){
    		cout<<startloop<<" ";
    		startloop++;
    	}
    	cout<<endl;
    }
}