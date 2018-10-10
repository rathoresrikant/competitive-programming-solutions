#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int min=INFINITY;
    for (int i=0;i<n-k+1;++i){
        if ((v[i+k-1]-v[i])<min)
            min=v[i+k-1]-v[i];       
    } 
    cout<<min;
     
    
    
}