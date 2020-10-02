//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform else nknagrale
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n<<endl;
    return 0;
}