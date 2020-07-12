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
    cout<<n<<endl;

}

for(int j=0;j<compare.size();j++){
    		if(compare[j]==t[0]){
    			bool check=false;
    			for(int k=0;k<t.length();k++){
    				if(j+k<compare.size()&&compare[j+k]==t[k]){
    					check=true;
    				}
    				else{
    					check=false;
    				}
    			}
    			if(check){
    				ans++;
    			}
    		}
    	}
