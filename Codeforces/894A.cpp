#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int n=a.length();
    int lq=0,rq=0,ans=0;
    for(char t:a){
        if(t=='Q'){
            rq++;
        }
    }
    for(char t:a){
        if(t=='Q'){
            rq--;
            lq++;
        } else if(t=='A'){
            ans = ans + (lq*rq);
        }
    }
    cout<<ans<<endl;
}
