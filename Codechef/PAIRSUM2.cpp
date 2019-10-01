#include <bits/stdc++.h>
using namespace std;
 
using namespace std;
 
int T , n , QN;
int B[1<<20];
long long S[1<<20];
int main(){
 
    cin>>T;
    while(T--) {
        cin>>n>>QN;
        int alln = 0;
        int allq = 0;
        for (int j = 1; j < n; j++)
            cin>>B[j];
        for(int j = 1 , c = 1 ; j <= n ; j++ , c*=-1){
            S[j] = c * B[j] + S[j-1];
 
        }
        for(int j = 1 ; j <= QN ; j++){
            int a , b;
            cin>>a>>b;
            if(b > a) swap(a , b);
            if( (b - a)%2 == 0){
                puts("UNKNOWN");
                continue;
            }
            if(a % 2) cout<<S[b-1] - S[a-1]<<endl;
            else cout<<-1 * S[b-1] + S[a-1]<<endl;
        }
    }
}