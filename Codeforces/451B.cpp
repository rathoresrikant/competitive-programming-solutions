#include<bits/stdc++.h>
using namespace std;

bool issorted(int a[]){

}

int main(){
    int n;cin>>n;
    int change=0;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int strt=0,stp=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            strt=i;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i-1]>a[i]){
            stp=i;
            break;
        }
    }
    
    reverse(a+strt,a+stp+1);
    if(is_sorted(a,a+n)){
        cout<<"yes"<<endl;
        cout<<strt+1<<" "<<stp+1<<endl;
    } else cout<<"no"<<endl;
    return 0;
}
