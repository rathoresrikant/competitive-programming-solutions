#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,e=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=n-1;i>=0;--i){
        e=(e+v[i]+1)/2;
    }
    cout<<e;
}