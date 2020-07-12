#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,i,j=0,temp;
    cin>>n>>k;
    vector<int> v(n);
    for(i=0;i<n;++i){
        cin>>v[i];
    }
    for(i=0;i<n;++i){
        if(v[i]!=n-i && k!=0){
            j=i+1;
            while(v[j]!=n-i){
                j++;
            }
           // j++;            
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            --k;
        }
        
    }
    for(i=0;i<v.size();++i){
        cout<<v[i]<<" ";
        
    }
    cout<<"\n";
    return 0;
}