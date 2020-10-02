//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int ans=0;
    int a[5]={100,20,10,5,1};
    for(int x:a){
        ans+=n/x;
        n%=x;
    }
    cout<<ans<<endl;
    return 0;
}