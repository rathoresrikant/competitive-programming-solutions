#include<iostream>
using namespace std;
int main(){
    int N, X,i,j,ct;
    cin>>N;
    for(i=0;i<N;i++){
        ct = 0;
        cin>>X;
        for(j=1;j*j<=X;j++){
            if(X%j==0){
                if(j*j==X)
                    ct++;
                else 
                    ct+=2;
            }
        }
        if(ct<=3)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
    }
    return 0;
}
