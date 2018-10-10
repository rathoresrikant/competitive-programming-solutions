#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    bool decide=false;
    for(int i=0;i<n-2;++i){
        if(v[i]<(v[i+1]+v[i+2])){
            cout<<v[i+2]<<" "<<v[i+1]<<" "<<v[i]<<endl;
            decide=true;
            break;            
        }      
       
    }
    if(!decide)
        cout<<-1<<endl;
    
   
}