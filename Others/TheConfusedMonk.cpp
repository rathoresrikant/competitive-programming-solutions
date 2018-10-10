#define MQ 1000000007
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a<b){
     a = a+b;
     b = a-b;
     a = a-b;
    }
    if(b==0)
        return a;
    return gcd(b,a%b);
}
long long powmod(long long a, int n){
    long long ans=1;
    int b = n;
    while(b!=0){
        if(b%2==1)
            ans = (ans*a)%MQ;
        a = (a*a)%MQ;
        b/=2;
    }
    return ans;
}
int main(){
    int N,GCD,i;
    long long p=1;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++){
        cin>>arr[i];
        if(i==0)
            GCD = arr[i];
        else
            GCD  = gcd(arr[i],GCD);
        p=(p*arr[i])%MQ;
    }
    cout<<powmod(p, GCD);
    return 0;
}
