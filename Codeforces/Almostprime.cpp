#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,ct,count=0;
    cin>>n;
    int s[n+1];
    for(i=2;i<=n;i++)
        s[i] = i;
    for(i=2;i*i<=n;i++){
        if(s[i]==i){
            for(j=i*i;j<=n;j+=i)
                s[j] = i;
        }
    }
    for(i=2;i<=n;i++){
        if(s[i]!=i){
            ct=0,k=i;
            while(k!=1){
                j=s[k];
                while(k%j==0)
                    k = k/j;
                ct++;
            }
            if(ct==2)
                count++;
        }
    }
    cout<<count;
    return 0;
}
