#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,count=0,tot=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();++i){     
        tot=tot+(i/k+1)*v[i];       
        
    }
    cout<<tot;
    return 0;
}