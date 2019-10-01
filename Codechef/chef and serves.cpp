#include <bits/stdc++.h>
using namespace std;
int main() {
    int p1,p2,k,t;
    cin >> t;
    while(t--){
        cin >> p1 >> p2 >> k;
        if(( (p1+p2+1)/k + ((p1+p2+1)%k!=0))&1){
            puts("CHEF");
        }else{
            puts("COOK");
        }
    }
	return 0;
}
