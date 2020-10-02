//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform else nknagrale
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    long long sum=((w*(w+1))/2)*k;
    if(n>=sum) cout<<0<<endl;
    else cout<<sum-n<<endl;
    return 0;
}