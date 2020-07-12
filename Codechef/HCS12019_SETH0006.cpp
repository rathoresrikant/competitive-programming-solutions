//this is the solution code for problem: https://www.codechef.com/HCS12019/problems/SETH0006

#include<bits/stdc++.h>
using namespace std;

int check(long n){
    long t=n;
    int h[10]={0};
     while(t){
         
         h[t%10]++;
          
          if(h[t%10]>1)
           return -1;
          
         t/=10; 
     }
     
     return n;
}

int main(){
    
    long l,r,n,i;
    
    cin>>l>>r;
    

    for(i=l;i<=r;i++){
        n=check(i);
        
        if(n!=-1)
          break;
    }    
    
     cout<<n;
     
    return 0;
}
