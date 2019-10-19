//this is a solution code for problem: https://www.codechef.com/KOKO2019/problems/DISTCHOC

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long n,i,x=0;
    cin>>n;
    
    int a[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    for(i=0;i<n;i++){
        
        x+=a[i]*(n-1-i);
    }
    
    cout<<x;
    
    return 0;
}
