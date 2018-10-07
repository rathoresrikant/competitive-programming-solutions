#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    long double x,y;
    cin>>x>>y;
    long double ans1=y * log(x);
    long double ans2=x * log(y);
    if(x==y){
        cout<<"="<<endl;
    }
    else if(ans1==ans2){
        cout<<"="<<endl;
    }
    else if(ans1>ans2){
        cout<<">"<<endl;
    }
    else{
        cout<<"<"<<endl;
    }   
}