#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int n;
    long w;
    cin>>n>>w;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long min=LONG_MAX,max=LONG_MIN;
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<min){
            min=sum;
        }
        if(sum>max){
            max=sum;
        }
    }
    long upperbound=w-max;
    long lowerbound=-1*min;
    if(max<0){
        upperbound=w;
    }
    if(lowerbound<0){
        lowerbound=0;
    }
    if(upperbound>=lowerbound){
       cout<<upperbound-lowerbound+1<<endl; 
    }
    else{
        cout<<"0"<<endl;
    }
    
    delete [] arr;
}