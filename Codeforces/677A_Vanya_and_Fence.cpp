//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform else nknagrale
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    vector<int> v;
    int temp;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>h)
        ans+=2;
        else ans++;
    }
    cout<<ans<<endl;
    return 0;
}