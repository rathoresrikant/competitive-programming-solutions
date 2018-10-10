#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair <long int,int> >v;
    long int o_time,p_time;
    for(int i=0;i<n;++i){
        cin>>o_time>>p_time;
        v.push_back(make_pair(o_time+p_time,i+1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();++i){
        cout<<v[i].second<<" ";
    }
    return 0;
    
}