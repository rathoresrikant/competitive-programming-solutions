#include <bits/stdc++.h>
using namespace std;

int NoOfWays(int n,int m){
    if(n==1){
        return INT_MAX;
    }
    if(n==m){
        return 0;
    }
    if(n>m){
        return n-m;
    }
    
    int option1=1+NoOfWays(n-1,m);
    int option2=1+NoOfWays(2*n,m);
    return min(option1,option2);
}

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n,m;
    cin>>n>>m;
    cout<<"HO"<<endl;
    cout<<NoOfWays(n,m)<<endl;
    cout<<"HI"<<endl;


}