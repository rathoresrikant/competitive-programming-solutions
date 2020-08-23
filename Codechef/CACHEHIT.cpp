#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t>0) {
        
        int n,b,m;
        cin>>n>>b>>m;
        int find [m];
        for(int i=0;i<m;i++) {
            cin>>find[i];
        }
        
        int arr[n];
        int val = 0;
        
        for(int i=0;i<n;i++) {
            arr[i] = val;
            val++;
        }
        
        int quo = n / b;
        int rem = n % b;
        
        int ans = 1;
        
        if(rem==0) {
            int block[quo][b];
            
            int val = 0;
            
            for(int i=0;i<quo;i++) {
                for(int j=0;j<b;j++) {
                    block[i][j] = val;
                    val++;
                }
            }
            
            int prev = -1;
            
            for(int i=0;i<m;i++) {
                int item = find[i];
                int blockno = item / b;
                
                if(i!=0) {
                    if(prev!=blockno) {
                        ans++;
                    }
                }
                prev = blockno;
            }
            
            
            
            
            
            
            
            
        } else {
            int block[quo+1][b];
            
            int val = 0;
            
            for(int i=0;i<quo;i++) {
                for(int j=0;j<b;j++) {
                    block[i][j] = val;
                    val++;
                }
            }
            
            
            int prev = -1;
            
            
            
            for(int i=0;i<m;i++) {
                int item = find[i];
                int blockno = item / b;
                
                if(i!=0) {
                    if(prev!=blockno) {
                        ans++;
                    }
                }
                
                prev = blockno;
            }
        }
      
      
      cout<<ans<<endl;
       
      
        
        
        
        
        t--;
    }
	// your code goes here
	return 0;
}
