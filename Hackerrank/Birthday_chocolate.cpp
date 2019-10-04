#include<iostream>
using namespace std;
int main (){
    int d,m,n,total=0,sum;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];}
    cin>>d;
    cin>>m;
        for (int i=0;i<n-m+1;i++){
            for (int j = i; j < i + m; j++){
                sum=sum+a[j];}          
            if (d==sum){
              total ++;
                }
            sum=0; 
        }
    cout<<total;
    return 0;}
