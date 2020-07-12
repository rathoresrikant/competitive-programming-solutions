//cook your dish here
#include<iostream>
using namespace std;
int main(){
    int n,k,t,i,a;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        for(i=0;i<n;i++){
           cin>>a;
           if(k>=a){
               k = k-a;
               cout<<1;
           }
           else 
                cout<<0;
        }
        cout<<"\n";
    }
}

