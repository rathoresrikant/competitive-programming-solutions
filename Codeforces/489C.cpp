#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin>>m>>s;
    if(9*m < s){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    if(9*m == s){
        for(int i=0;i<m;i++)cout<<9;
        cout<<" ";
        for(int i=0;i<m;i++)cout<<9;
        cout<<endl;
        return 0;
    }
    if(s==0){
        if(m==1)cout<<0<<" "<<0<<endl;
        else cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    vector<int> mn(m,0);
    vector<int> mx(m,0);
    int tsum=0;
    int tdit=s/9;
    for(int i=0;i<tdit;i++){
        mx[i]=9;
        tsum+=9;
    }
    mx[tdit]=s-tsum;
    tdit++;
    if(s-tsum==0)tdit--;
    for(int i=tdit;i<m;i++){
        mx[i];
    }
    for(int i=0;i<m;i++){
        mn[i]=mx[i];
    }
    mn[tdit-1]--;
    mn[m-1]++;
    for(int i=0;i<m;i++){
        cout<<mn[m-1-i];
    }
    cout<<" ";
    for(int i=0;i<m;i++){
        cout<<mx[i];
    }
    cout<<endl;
    return 0;
}
